/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_4_5.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguenzao <aguenzao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 11:30:24 by aguenzao          #+#    #+#             */
/*   Updated: 2025/02/01 08:38:05 by aguenzao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_four(t_list **a, t_list **b)
{
	t_list	*min;

	if (is_sort(a))
	{
		min = get_min_number(*a);
		while (1)
		{
			if (min->data != (*a)->data)
				rra(a);
			else
				break ;
		}
		pb(a, b);
		ft_sort_three(a);
		pa(a, b);
	}
	return ;
}

void	ft_sort_five(t_list **a, t_list **b)
{
	t_list	*min;

	if (is_sort(a))
	{
		min = get_min_number(*a);
		while (1)
		{
			if (min == (*a)->next)
				ra(a);
			else if (min->data != (*a)->data)
				rra(a);
			else
				break ;
		}
		pb(a, b);
		ft_sort_four(a, b);
		pa(a, b);
		return ;
	}
	return ;
}
