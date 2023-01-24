/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khallal <khallal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 14:34:48 by khallal           #+#    #+#             */
/*   Updated: 2023/01/17 12:40:14 by khallal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

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

char				*ft_strjoin0(char *s1, char *s2);
char				*ft_strchr(char *s, int c);
char				*ft_strdup(char *s1);
void				*ft_calloc(size_t count, size_t size);
size_t				ft_strlen(char *s);
char				*get_next_line(int fd);
char				**ft_split(char const *s, char c);
int					ft_atoi(const char *s);
char				*ft_strjoin(char *s1, char *s2);
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
void				ft_move(t_list **a, t_list **b, char *tmp);
int					ft_strcmp(char *tmp, char *mv);
void				ft_read(t_list **a, t_list **b);

#endif
