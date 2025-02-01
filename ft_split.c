/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguenzao <aguenzao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 11:30:44 by aguenzao          #+#    #+#             */
/*   Updated: 2025/02/01 08:40:07 by aguenzao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*ft_strdup(const char *src)
{
	char	*dst;
	size_t	len;
	size_t	i;

	len = ft_strlen(src);
	dst = malloc(sizeof(char) * (len + 1));
	if (!dst)
		return (NULL);
	i = 0;
	while (i < len)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;

	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (i < len)
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
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
			ft_error_message("Error");
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
