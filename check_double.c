/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_double.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khallal <khallal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 20:15:34 by khallal           #+#    #+#             */
/*   Updated: 2023/01/23 15:59:29 by khallal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_double(t_list **a)
{
	t_list	*tmp;
	t_list	*tmp1;

	tmp = (*a);
	while (tmp)
	{
		tmp1 = tmp->next;
		while (tmp1)
		{
			if (tmp->content == tmp1->content)
			{
				write(2, "Error\n", 6);
				exit(1);
			}
			tmp1 = tmp1->next;
		}
		tmp = tmp->next;
	}
}
