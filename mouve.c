/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mouve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khallal <khallal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 20:37:03 by khallal           #+#    #+#             */
/*   Updated: 2023/01/12 20:37:04 by khallal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_list **lst)
{
	t_list	*tmp;
	t_list	*cont;

	tmp = (*lst);
	(*lst) = (*lst)->next;
	cont = (*lst)->next;
	(*lst)->next = tmp;
	tmp->next = cont;
	write(1, "sa\n", 3);
}

void	sb(t_list **lst)
{
	t_list	*tmp;
	t_list	*cont;

	tmp = (*lst);
	(*lst) = (*lst)->next;
	cont = (*lst)->next;
	(*lst)->next = tmp;
	tmp->next = cont;
	write(1, "sb\n", 3);
}

void	ss(t_list **lst, t_list **tls)
{
	sa(lst);
	sb(tls);
	write(1, "ss\n", 3);
}

void	pa(t_list **a, t_list **b)
{
	t_list	*tmp;
	t_list	*tmp2;

	if (!(*b))
		return ;
	if (!(*a))
	{
		tmp = (*b);
		(*a) = tmp;
		(*b) = (*b)->next;
		(*a)->next = NULL;
	}
	else if ((*b))
	{
		tmp = (*b);
		(*b) = (*b)->next;
		tmp2 = (*a);
		(*a) = tmp;
		(*a)->next = tmp2;
	}
	write(1, "pa\n", 3);
}

void	pb(t_list **a, t_list **b)
{
	t_list	*tmp;
	t_list	*tmp2;

	if (!(*a))
		return ;
	if (!(*b))
	{
		tmp = (*a);
		(*b) = tmp;
		(*a) = (*a)->next;
		(*b)->next = NULL;
	}
	else if ((*b))
	{
		tmp = (*a);
		(*a) = (*a)->next;
		tmp2 = (*b);
		(*b) = tmp;
		(*b)->next = tmp2;
	}
	write(1, "pb\n", 3);
}
