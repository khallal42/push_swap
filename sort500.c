/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort500.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khallal <khallal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 11:11:02 by khallal           #+#    #+#             */
/*   Updated: 2023/01/12 20:18:11 by khallal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort500(t_list **a, t_list **b)
{
	t_push_swap	*t;

	t = malloc(sizeof(t_push_swap));
	t->offset = ft_lstsize(*a) / 18;
	t->mid = ft_lstsize(*a) / 2 - 1;
	t->start = t->mid - t->offset;
	t->end = t->mid + t->offset;
	t->k = creat_tabl(a);
	t->cont = 0;
	t->size_tab = ft_lstsize(*a) - 1;
	push_a(a, t->k, b, t);
	push_b(a, b, t);
	while (t->k[ft_lstsize(*a) - 1] != ft_lstlast(*a)->content)
		rra(a);
}
