/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mouve_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khallal <khallal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 20:37:03 by khallal           #+#    #+#             */
/*   Updated: 2023/01/23 18:42:16 by khallal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	sa(t_list **lst)
{
	t_list	*tmp;
	t_list	*cont;

	if (!(*lst))
		return ;
	if (ft_lstsize(*lst) > 1)
	{
		tmp = (*lst);
		(*lst) = (*lst)->next;
		cont = (*lst)->next;
		(*lst)->next = tmp;
		tmp->next = cont;
	}
}

void	sb(t_list **lst)
{
	t_list	*tmp;
	t_list	*cont;

	if (!(*lst))
		return ;
	if (ft_lstsize(*lst) > 1)
	{
		tmp = (*lst);
		(*lst) = (*lst)->next;
		cont = (*lst)->next;
		(*lst)->next = tmp;
		tmp->next = cont;
	}
}

void	ss(t_list **lst, t_list **tls)
{
	sa(lst);
	sb(tls);
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
}
