/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parcing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguenzao <aguenzao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 11:32:09 by aguenzao          #+#    #+#             */
/*   Updated: 2025/02/01 09:02:07 by aguenzao         ###   ########.fr       */
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
		ft_error_message("Error");
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			ft_error_message("Error");
		r = r * 10 + (str[i] - '0');
		if (r * s > 2147483647 || r * s < -2147483648)
			ft_error_message("Error");
		i++;
	}
	return (r * s);
}

void	ft_free_leak(char **str)
{
	int	i;

	i = 0;
	while (str && str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
}

void	ft_parcing(t_list **nbr, char **av)
{
	int		i;
	int		j;
	char	**str;

	i = 1;
	while (av[i])
	{
		j = 0;
		str = ft_split(av[i], ' ');
		if (!str)
			(ft_free_leak(str), exit(1));
		while (str[j])
		{
			ft_lstadd_back(nbr, ft_lstnew(ft_atoi(str[j])));
			ft_duplicat(*nbr);
			free(str[j]);
			j++;
		}
		free(str);
		i++;
	}
}

void	ft_lstclear(t_list **lst)
{
	t_list	*current;
	t_list	*tmp;

	if (!lst)
		return ;
	current = *lst;
	while (current)
	{
		tmp = current;
		current = current->next;
		free(tmp);
	}
	*lst = NULL;
}
