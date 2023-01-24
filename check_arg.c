/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_arg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khallal <khallal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 20:06:52 by khallal           #+#    #+#             */
/*   Updated: 2023/01/17 11:21:32 by khallal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_arg(char *av)
{
	int	i;

	i = 0;
	while (av[i])
	{
		if (ft_isdigit(av[i]) == 1 && (av[i + 1] == '-' || av[i + 1] == '+'))
			(write(2, "Error\n", 6), exit(1));
		if ((av[i] == '-' || av[i] == '+') && ft_isdigit(av[i + 1]) == 0)
			(write(2, "Error\n", 6), exit(1));
		if ((av[i] < '0' || av[i] > '9') && av[i] != ' ' && av[i] != '-'
			&& av[i] != '+')
			(write(2, "Error\n", 6), exit(1));
		i++;
	}
}
