/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_smol_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khallal <khallal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 13:54:29 by khallal           #+#    #+#             */
/*   Updated: 2023/01/17 11:58:18 by khallal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*k;

	k = lst;
	i = 0;
	while (k)
	{
		k = k->next;
		i++;
	}
	return (i);
}

int	position(t_list **a, int i)
{
	t_list	*tmp1;
	int		k;
	int		c;

	c = 0;
	k = 0;
	tmp1 = (*a);
	while (tmp1)
	{
		if (i == tmp1->content)
		{
			k = c;
			return (k);
		}
		c++;
		tmp1 = tmp1->next;
	}
	return (-1);
}

int	small(t_list **a)
{
	t_list	*tmp;
	int		i;

	tmp = (*a);
	i = (*a)->content;
	while (tmp)
	{
		if (i > tmp->content)
		{
			i = tmp->content;
		}
		tmp = tmp->next;
	}
	return (i);
}

void	sort3(t_list **a)
{
	if (ft_lstsize(*a) == 2)
	{
		if ((*a)->content > (*a)->next->content)
			sa(a);
		return ;
	}
	while (!check_sort((a)))
	{
		if ((*a)->content > (*a)->next->content
			&& (*a)->content > (*a)->next->next->content
			&& (*a)->next->content < (*a)->next->next->content)
		{
			rra(a);
			rra(a);
		}
		if ((*a)->content > (*a)->next->content)
			sa(a);
		if ((*a)->content > (*a)->next->next->content)
			rra(a);
		if ((*a)->next->content > (*a)->next->next->content)
			rra(a);
	}
}

void	sort5(t_list **a, t_list **b)
{
	int	i;
	int	j;
	int	k;
	int	g;

	j = ft_lstsize((*a));
	while (j > 3)
	{
		i = small(a);
		k = position(a, i);
		j = ft_lstsize(*a);
		g = ft_lstsize(*a) / 2;
		while (i != (*a)->content && k > g)
			rra(a);
		while (i != (*a)->content && k <= g)
			ra(a);
		pb(a, b);
	}
	sort3(a);
	while ((*b))
		pa(a, b);
}
