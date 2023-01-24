/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khallal <khallal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 20:44:18 by khallal           #+#    #+#             */
/*   Updated: 2023/01/23 15:35:57 by khallal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	int				content;
	struct s_list	*next;
}					t_list;

typedef struct s_push_swap
{
	int				offset;
	int				mid;
	int				start;
	int				end;
	int				*k;
	int				size_tab;
	int				y;
	int				x;
	int				h;
	int				cont;
}					t_push_swap;

char				**ft_split(char const *s, char c);
int					ft_atoi(const char *s);
char				*ft_strjoin_m(char *s1, char *s2);
size_t				ft_strlen(const char *s);
void				check_arg(char *av);
void				check_double(t_list **a);
void				sa(t_list **lst);
void				sb(t_list **lst);
void				ss(t_list **lst, t_list **tls);
void				pb(t_list **a, t_list **b);
void				pa(t_list **a, t_list **b);
void				ft_lstadd_back(t_list **lst, t_list *new);
void				ra(t_list **a);
void				rb(t_list **b);
void				rra(t_list **a);
void				rrb(t_list **b);
void				rrr(t_list **a, t_list **b);
void				sort3(t_list **a);
int					check_sort(t_list **lst);
void				sort5(t_list **a, t_list **b);
void				sort100(t_list **a, t_list **b);
void				printList(t_list **start);
int					ft_lstsize(t_list *lst);
void				sort_tab(int *k, int i);
void				rrb(t_list **b);
void				rra(t_list **a);
void				rr(t_list **a, t_list **b);
void				rrr(t_list **a, t_list **b);
void				rb(t_list **b);
void				ra(t_list **a);
void				sort_tab(int *k, int l);
int					*creat_tabl(t_list **a);
int					cherche(int *k, t_list **a, int start, int end);
int					ft_exist(int i, t_list **b);
t_list				*ft_lstlast(t_list *lst);
int					position(t_list **a, int i);
void				sort500(t_list **a, t_list **b);
void				push_b(t_list **a, t_list **b, t_push_swap *t);
void				else_if(t_list **a, t_list **b, t_push_swap *t);
void				els(t_list **b, t_push_swap *t);
void				push_a(t_list **a, int *k, t_list **b, t_push_swap *t);
t_list				*ft_lstnew(int content);
void				printList(t_list **start);
int					ft_isdigit(int c);
void				range_plus(t_push_swap *t);

#endif