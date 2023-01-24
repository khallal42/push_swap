/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khallal <khallal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 11:26:19 by khallal           #+#    #+#             */
/*   Updated: 2023/01/24 13:35:39 by khallal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	ft_read(t_list **a, t_list **b)
{
	char	*tmp;

	tmp = get_next_line(0);
	while (tmp)
	{
		if (tmp == NULL)
			break ;
		ft_move(a, b, tmp);
		tmp = get_next_line(0);
	}
	if (check_sort(a) && !(*b))
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
}
