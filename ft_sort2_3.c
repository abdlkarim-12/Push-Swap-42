/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort2_3.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguenzao <aguenzao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 11:30:33 by aguenzao          #+#    #+#             */
/*   Updated: 2025/02/01 16:40:05 by aguenzao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

size_t	ft_strlen(const char	*str)
{
	size_t	i;

	if (!str)
		return (0);
	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_sort_two(t_list **lst)
{
	if ((*lst)->value > (*lst)->next->value)
		sa(lst);
	return ;
}

void	ft_sort_three(t_list **lst)
{
	t_list	*max;

	if (is_not_sort(lst))
	{
		max = get_max_number(*lst);
		if (max->value == (*lst)->value)
			ra(lst);
		else if (max->value == (*lst)->next->value)
			rra (lst);
		if ((*lst)->value > (*lst)->next->value)
			sa (lst);
	}
	return ;
}
