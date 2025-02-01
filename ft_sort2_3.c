/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort2_3.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguenzao <aguenzao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 11:30:33 by aguenzao          #+#    #+#             */
/*   Updated: 2025/02/01 08:38:28 by aguenzao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_two(t_list **lst)
{
	if ((*lst)->data > (*lst)->next->data)
		sa(lst);
	return ;
}

void	ft_sort_three(t_list **lst)
{
	t_list	*max;

	if (is_sort(lst))
	{
		max = get_max_number(*lst);
		if (max->data == (*lst)->data)
			ra(lst);
		else if (max->data == (*lst)->next->data)
			rra (lst);
		if ((*lst)->data > (*lst)->next->data)
			sa (lst);
	}
	return ;
}
