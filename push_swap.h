/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguenzao <aguenzao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 11:32:32 by aguenzao          #+#    #+#             */
/*   Updated: 2025/02/01 09:09:05 by aguenzao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>

typedef struct s_list
{
	int				data;
	struct s_list	*next;
	int				indx;
	int				position;
}	t_list;

t_list	*ft_lstnew(int data);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
int		ft_lstsize(t_list *lst);
void	ft_lstclear(t_list **lst);
void	pa(t_list **a, t_list **b);
void	pb(t_list **a, t_list **b);
void	rb(t_list **b);
void	rrb(t_list **b);
void	sb(t_list **b);
void	ra(t_list **a);
void	rra(t_list **a);
void	sa(t_list **a);
void	ft_error_message(char *mess);
void	ft_duplicat(t_list *lst);
int		is_sort(t_list **lst);
t_list	*get_min_number(t_list *lst);
t_list	*get_max_number(t_list *lst);
void	ft_sort_two(t_list **lst);
void	ft_sort_three(t_list **lst);
void	ft_sort_four(t_list **a, t_list **b);
void	ft_sort_five(t_list **a, t_list **b);
size_t	ft_strlen(const char *str);
char	**ft_split(char const *s, char c);
char	*ft_substr(const char *s, unsigned int start, size_t len);
char	*ft_strdup(const char *src);
int		max_position(t_list *lst);
void	mark_position(t_list **stack);
int		main(int ac, char *av[]);
void	ft_indexing(t_list *lst);
int		ft_atoi(const char *str);
void	ft_free_leak(char **str);
void	ft_parcing(t_list **nbr, char **av);
void	ft_sort(t_list **a, t_list **b, int i, int x);
void	ft_sort_five_or_less(t_list **a, t_list **b);
void	ft_sort_b(t_list **a, t_list **b, int size);

#endif
