/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_a_b.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguenzao <aguenzao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 11:29:54 by aguenzao          #+#    #+#             */
/*   Updated: 2025/02/01 16:31:30 by aguenzao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_list **a, t_list **b)
{
	t_list	*tmp;

	if (ft_lstsize(*b) < 1)
		return ;
	tmp = *b;
	*b = tmp->next;
	tmp->next = *a;
	*a = tmp;
	write (1, "pa\n", 3);
}

void	pb(t_list **a, t_list **b)
{
	t_list	*tmp;
	t_list	*tmp1;

	if (ft_lstsize(*a) < 1)
		return ;
	tmp = *a;
	tmp1 = *b;
	*a = (*a)->next;
	tmp->next = tmp1;
	*b = tmp;
	write(1, "pb\n", 3);
}
