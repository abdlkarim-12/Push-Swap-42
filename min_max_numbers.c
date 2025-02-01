/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min_max_numbers.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguenzao <aguenzao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 16:35:17 by aguenzao          #+#    #+#             */
/*   Updated: 2025/02/01 16:35:29 by aguenzao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*get_min_number(t_list *lst)
{
	t_list	*tmp;

	tmp = lst;
	while (tmp)
	{
		if (lst->value > tmp->value)
			lst = tmp;
		tmp = tmp->next;
	}
	return (lst);
}

t_list	*get_max_number(t_list *lst)
{
	t_list	*tmp;

	tmp = lst;
	while (tmp)
	{
		if (lst->value < tmp->value)
			lst = tmp;
		tmp = tmp->next;
	}
	return (lst);
}
