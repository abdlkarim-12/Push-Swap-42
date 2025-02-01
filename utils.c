/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguenzao <aguenzao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 11:32:40 by aguenzao          #+#    #+#             */
/*   Updated: 2025/02/01 16:37:49 by aguenzao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	error_message(char *mess)
{
	int	i;

	i = 0;
	while (mess[i])
	{
		write (2, &mess[i], 1);
		i++;
	}
	write(2, "\n", 1);
	exit(1);
}

void	ft_duplicate(t_list *lst)
{
	t_list	*tmp;
	t_list	*tmp1;

	tmp1 = lst;
	ft_indexing(lst);
	while (tmp1)
	{
		tmp = tmp1->next;
		while (tmp)
		{
			if (tmp1->value == tmp->value)
				error_message("Error");
			tmp = tmp-> next;
		}
		tmp1 = tmp1->next;
	}
}

int	is_not_sort(t_list **lst)
{
	t_list	*iter;

	iter = (*lst);
	while (iter)
	{
		if (iter->next)
		{
			if (iter->value > iter->next->value)
				return (1);
		}
		iter = iter->next;
	}
	return (0);
}

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
