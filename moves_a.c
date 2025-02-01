/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_a.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguenzao <aguenzao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 11:31:52 by aguenzao          #+#    #+#             */
/*   Updated: 2025/02/01 08:43:38 by aguenzao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_list **a)
{
	t_list	*curr;
	t_list	*prev;
	t_list	*tmp;

	if (ft_lstsize(*a) < 2)
		return ;
	tmp = *a;
	curr = *a;
	prev = (*a)->next;
	while (curr->next)
		curr = curr->next;
	curr->next = tmp;
	tmp->next = NULL;
	(*a) = prev;
	write(1, "ra\n", 3);
}

void	rra(t_list **a)
{
	t_list	*curr;
	t_list	*prev;

	if (ft_lstsize(*a) < 2)
		return ;
	curr = *a;
	while (curr->next)
	{
		prev = curr;
		curr = curr->next;
	}
	curr->next = *a;
	prev->next = NULL;
	(*a) = curr;
	write(1, "rra\n", 4);
}

void	sa(t_list **a)
{
	t_list	*tmp;
	t_list	*prev;

	if (!a || !*a)
		return ;
	if (ft_lstsize(*a) < 2)
		return ;
	tmp = *a;
	prev = (*a)->next;
	tmp->next = prev->next;
	prev->next = tmp;
	(*a) = prev;
	write(1, "sa\n", 3);
}
