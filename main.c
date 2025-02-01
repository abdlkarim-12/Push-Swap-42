/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguenzao <aguenzao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 11:30:54 by aguenzao          #+#    #+#             */
/*   Updated: 2025/02/01 08:42:43 by aguenzao         ###   ########.fr       */
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
			if (tmp->data < tmpx->data)
				i++;
			tmp = tmp->next;
		}
		tmpx->indx = i;
		tmpx = tmpx->next;
	}
}

int	max_position(t_list *lst)
{
	t_list	*tmp;
	t_list	*max;

	tmp = lst;
	max = tmp;
	while (tmp)
	{
		if (tmp->data > max->data)
			max = tmp;
		tmp = tmp->next;
	}
	return (max->position);
}

void	mark_position(t_list **stack)
{
	t_list	*tmp;
	int		i;

	i = 0;
	tmp = (*stack);
	while (tmp)
	{
		tmp->position = i;
		tmp = tmp->next;
		i++;
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
	ft_parcing(&s_a, av);
	if (is_sort(&s_a))
	{
		ft_sort(&s_a, &s_b, 0, 0);
		ft_sort_b(&s_a, &s_b, 0);
	}
	ft_lstclear(&s_a);
}
