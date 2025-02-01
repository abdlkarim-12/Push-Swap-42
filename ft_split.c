/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguenzao <aguenzao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 11:30:44 by aguenzao          #+#    #+#             */
/*   Updated: 2025/02/01 16:45:54 by aguenzao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_atoi(const char *str)
{
	int		i;
	int		s;
	long	r;

	(1) && (i = 0, s = 1, r = 0);
	while (str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			s = -1;
		i++;
	}
	if (str[i] == '\0')
		error_message("Error");
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			error_message("Error");
		r = r * 10 + (str[i] - '0');
		if (r * s > 2147483647 || r * s < -2147483648)
			error_message("Error");
		i++;
	}
	return (r * s);
}

static int	ft_countword(char const *str, char c)
{
	int	i;
	int	count;
	int	b;

	i = 0;
	count = 0;
	b = 0;
	while (str[i] == ' ')
	{
		if (str[i + 1] == '\0')
			error_message("Error");
		i++;
	}
	while (str[i])
	{
		if (str[i] != c && b == 0)
		{
			b = 1;
			count++;
		}
		else if (str[i] == c)
			b = 0;
		i++;
	}
	return (count);
}

static void	ft_free_split(char **words)
{
	int	i;

	i = 0;
	while (words[i] != NULL)
	{
		free(words[i]);
		i++;
	}
	free(words);
}

char	**ft_split(char const *s, char c)
{
	char	**p;
	int		i;
	int		wc;
	int		wi;
	int		wl;

	i = 0;
	wi = 0;
	wc = ft_countword(s, c);
	p = (char **)malloc(sizeof(char *) * (wc + 1));
	if (p == NULL)
		return (NULL);
	while (wi < wc)
	{
		while (s[i] == c)
			i++;
		wl = 0;
		while (s[i + wl] && s[i + wl] != c)
			wl++;
		p[wi] = ft_substr(s, i, wl);
		if (p[wi++] == NULL)
			return (ft_free_split(p), NULL);
		i += wl;
	}
	return (p[wi] = NULL, p);
}
