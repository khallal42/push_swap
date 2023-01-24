/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khallal <khallal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 11:25:50 by khallal           #+#    #+#             */
/*   Updated: 2023/01/23 18:15:13 by khallal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	ft_move(t_list **a, t_list **b, char *tmp)
{
	if (ft_strcmp(tmp, "sa\n"))
		sa(a);
	else if (ft_strcmp(tmp, "sb\n"))
		sb(b);
	else if (ft_strcmp(tmp, "ss\n"))
		ss(a, b);
	else if (ft_strcmp(tmp, "pa\n"))
		pa(a, b);
	else if (ft_strcmp(tmp, "pb\n"))
		pb(a, b);
	else if (ft_strcmp(tmp, "ra\n"))
		ra(a);
	else if (ft_strcmp(tmp, "rb\n"))
		rb(b);
	else if (ft_strcmp(tmp, "rr\n"))
		rr(a, b);
	else if (ft_strcmp(tmp, "rra\n"))
		rra(a);
	else if (ft_strcmp(tmp, "rrb\n"))
		rrb(b);
	else if (ft_strcmp(tmp, "rrr\n"))
		rrr(a, b);
	else
		(write(2, "Error\n", 6), exit(1));
}
