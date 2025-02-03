/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguenzao <aguenzao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 11:32:09 by aguenzao          #+#    #+#             */
/*   Updated: 2025/02/02 15:29:28 by aguenzao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

void	ft_parsing(t_list **nbr, char **av)
{
	int		i;
	int		j;
	char	**str;

	i = 1;
	while (av[i])
	{
		j = 0;
		if (!av[i][0])
			error_message("Error");
		str = ft_split(av[i], ' ');
		if (!str)
			(ft_free_leak(str), exit(1));
		while (str[j])
		{
			ft_lstadd_back(nbr, ft_lstnew(ft_atoi(str[j])));
			ft_duplicate(*nbr);
			free(str[j]);
			j++;
		}
		free(str);
		i++;
	}
}
