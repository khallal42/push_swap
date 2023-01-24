/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khallal <khallal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 11:59:50 by khallal           #+#    #+#             */
/*   Updated: 2023/01/17 11:57:50 by khallal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	push_a(t_list **a, int *k, t_list **b, t_push_swap *t)
{
	while ((*a))
	{
		t->h = cherche(k, a, t->start, t->end);
		t->x = position(a, t->h);
		if (t->x != -1)
		{
			while (t->h != (*a)->content && t->x > ft_lstsize(*a) / 2)
				rra(a);
			while (t->h != (*a)->content && t->x <= ft_lstsize(*a) / 2)
				ra(a);
			pb(a, b);
			if (t->h < k[t->mid])
				rb(b);
		}
		else
			range_plus(t);
	}
}

void	els(t_list **b, t_push_swap *t)
{
	t->x = position(b, t->k[t->size_tab]);
	if (t->x != -1)
	{
		if (t->k[t->size_tab] != (*b)->content && t->x > t->y / 2)
			rrb(b);
		else if (t->k[t->size_tab] != (*b)->content && t->x <= t->y / 2)
			rb(b);
	}
}

void	else_if(t_list **a, t_list **b, t_push_swap *t)
{
	pa(a, b);
	ra(a);
	t->cont++;
}

void	push_b(t_list **a, t_list **b, t_push_swap *t)
{
	while ((*b))
	{
		t->y = ft_lstsize(*b);
		if (ft_exist(t->k[t->size_tab], b))
		{
			if (t->k[t->size_tab] == (*b)->content)
			{
				pa(a, b);
				t->size_tab--;
			}
			else if (t->cont == 0 || (*b)->content > ft_lstlast((*a))->content)
				else_if(a, b, t);
			else
				els(b, t);
		}
		else
		{
			rra(a);
			t->cont--;
			t->size_tab--;
		}
	}
}

void	sort100(t_list **a, t_list **b)
{
	t_push_swap	*t;

	t = malloc(sizeof(t_push_swap));
	t->offset = ft_lstsize(*a) / 8;
	t->mid = ft_lstsize(*a) / 2 - 1;
	t->start = t->mid - t->offset;
	t->end = t->mid + t->offset;
	t->k = creat_tabl(a);
	t->cont = 0;
	t->size_tab = ft_lstsize(*a) - 1;
	push_a(a, t->k, b, t);
	push_b(a, b, t);
}
