/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguenzao <aguenzao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 11:30:54 by aguenzao          #+#    #+#             */
/*   Updated: 2025/02/02 15:35:36 by aguenzao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_indexing(t_list *lst)
{
	t_list	*tmp;
	t_list	*tmpx;
	int		i;

	tmpx = lst;
	while (tmpx)
	{
		i = 0;
		tmp = lst;
		while (tmp)
		{
			if (tmp->value < tmpx->value)
				i++;
			tmp = tmp->next;
		}
		tmpx->index = i;
		tmpx = tmpx->next;
	}
}

int	main(int ac, char	*av[])
{
	t_list	*s_a;
	t_list	*s_b;

	s_a = NULL;
	s_b = NULL;
	if (ac == 1)
		return (0);
	ft_parsing(&s_a, av);
	if (is_not_sort(&s_a))
	{
		ft_sort_a(&s_a, &s_b, 0, 0);
		ft_sort_b(&s_a, &s_b, 0);
	}
	ft_lstclear(&s_a);
}
