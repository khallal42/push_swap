/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mouve2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khallal <khallal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 13:19:11 by khallal           #+#    #+#             */
/*   Updated: 2023/01/17 11:32:33 by khallal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rrr(t_list **a, t_list **b)
{
	rra(a);
	rrb(b);
	write(1, "rrb\n", 4);
}

void	range_plus(t_push_swap *t)
{
	if (t->start - t->offset < 0)
		t->start = 0;
	if (t->end + t->offset > t->size_tab)
		t->end = t->size_tab;
	else
	{
		t->start -= t->offset;
		t->end += t->offset;
	}
}
