/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguenzao <aguenzao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 11:32:17 by aguenzao          #+#    #+#             */
/*   Updated: 2025/02/01 16:39:05 by aguenzao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_five_or_less(t_list **a, t_list **b)
{
	if (ft_lstsize(*a) == 2)
		ft_sort_two(a);
	else if (ft_lstsize(*a) == 3)
		ft_sort_three(a);
	else if (ft_lstsize(*a) == 4)
		ft_sort_four(a, b);
	else if (ft_lstsize(*a) == 5)
		ft_sort_five(a, b);
	ft_lstclear(a);
	return ;
}

void	ft_sort_a(t_list **a, t_list **b, int i, int x)
{
	t_list	*tmp;

	if (ft_lstsize(*a) <= 5)
		ft_sort_five_or_less(a, b);
	else if (ft_lstsize(*a) <= 100)
		x = 16;
	else
		x = 36;
	while (*a)
	{
		tmp = *a;
		if (tmp->index <= i)
		{
			pb(a, b);
			i++;
		}
		else if (tmp->index <= i + x)
		{
			pb(a, b);
			rb(b);
			i++;
		}
		else
			ra(a);
	}
}

void	ft_sort_b(t_list **a, t_list **b, int size)
{
	int	max;

	size = ft_lstsize(*b);
	while (size)
	{
		mark_position(b);
		max = max_position(*b);
		if (max < size / 2)
		{
			while ((*b)->position != max)
				rb(b);
		}
		else
		{
			while ((*b)->position != max)
				rrb(b);
		}
		pa(a, b);
		size--;
	}
}
