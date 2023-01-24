/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mouve1_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khallal <khallal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 13:17:00 by khallal           #+#    #+#             */
/*   Updated: 2023/01/17 12:45:02 by khallal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	ra(t_list **a)
{
	t_list	*tmp;
	t_list	*tmp2;

	if (!(*a))
		return ;
	if (ft_lstsize(*a) >= 2)
	{
		tmp = (*a);
		(*a) = (*a)->next;
		tmp2 = (*a);
		while (tmp2->next)
		{
			tmp2 = tmp2->next;
		}
		tmp2->next = tmp;
		tmp2->next->next = NULL;
	}
}

void	rb(t_list **b)
{
	t_list	*tmp;
	t_list	*tmp2;

	if (!(*b))
		return ;
	if (ft_lstsize(*b) >= 2)
	{
		tmp = (*b);
		(*b) = (*b)->next;
		tmp2 = (*b);
		while (tmp2->next)
		{
			tmp2 = tmp2->next;
		}
		tmp2->next = tmp;
		tmp2->next->next = NULL;
	}
}

void	rr(t_list **a, t_list **b)
{
	ra(a);
	rb(b);
}

void	rra(t_list **a)
{
	t_list	*tmp;
	t_list	*tmp2;
	t_list	*tmp3;
	t_list	*tmp4;

	if (!(*a))
		return ;
	if (ft_lstsize(*a) >= 2)
	{
		tmp = (*a);
		tmp3 = (*a);
		tmp4 = (*a);
		while (tmp->next->next)
			tmp = tmp->next;
		tmp2 = tmp->next;
		while (tmp3->next->next)
		{
			tmp3 = tmp3->next;
		}
		tmp3->next = NULL;
		(*a) = tmp2;
		(*a)->next = tmp4;
	}
}

void	rrb(t_list **b)
{
	t_list	*tmp;
	t_list	*tmp2;
	t_list	*tmp3;
	t_list	*tmp4;

	if (!(*b))
		return ;
	if (ft_lstsize(*b) >= 2)
	{
		tmp = (*b);
		tmp3 = (*b);
		tmp4 = (*b);
		while (tmp->next->next)
			tmp = tmp->next;
		tmp2 = tmp->next;
		while (tmp3->next->next)
		{
			tmp3 = tmp3->next;
		}
		tmp3->next = NULL;
		(*b) = tmp2;
		(*b)->next = tmp4;
	}
}
