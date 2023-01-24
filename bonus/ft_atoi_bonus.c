/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khallal <khallal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 20:38:29 by khallal           #+#    #+#             */
/*   Updated: 2023/01/17 12:43:19 by khallal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	ft_atoi(const char *s)
{
	long long	res;
	int			sign;
	int			i;

	res = 0;
	i = 0;
	sign = 1;
	while (s[i] == 32 || (s[i] >= 9 && s[i] <= 13))
		i++;
	if (s[i] == '+' || s[i] == '-')
	{
		if (s[i] == '-')
			sign *= -1;
		i++;
	}
	while (s[i] >= 48 && s[i] <= 57)
	{
		res = res * 10 + s[i] - '0';
		i++;
	}
	if ((res > 2147483648 && sign == -1) || (res > 2147483647 && sign == 1))
		(write(2, "Error\n", 6), exit(1));
	return (res * sign);
}
