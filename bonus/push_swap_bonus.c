/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khallal <khallal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 11:40:26 by khallal           #+#    #+#             */
/*   Updated: 2023/01/23 18:52:06 by khallal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	ft_check(char *k)
{
	int	i;

	i = 0;
	while (k[i])
	{
		if (k[i] >= '0' && k[i] <= '9')
			return ;
		i++;
	}
	write(2, "Error\n", 6);
	exit(1);
}

char	*av_join(char **av)
{
	char	*k;
	int		i;

	i = 1;
	while (av[i])
	{
		if (av[i][0] == '\0')
		{
			write(2, "Error\n", 6);
			exit(1);
		}
		ft_check(av[i]);
		k = ft_strjoin(k, av[i]);
		k = ft_strjoin(k, " ");
		i++;
	}
	return (k);
}

int	main(int ac, char **av)
{
	int		i;
	char	*k;
	char	**ar;
	t_list	*j;
	t_list	*b;

	if (ac > 1)
	{
		k = av_join(av);
		check_arg(k);
		ar = ft_split(k, ' ');
		i = -1;
		while (ar[++i])
			ft_lstadd_back(&j, ft_lstnew(ft_atoi(ar[i])));
		check_double(&j);
		ft_read(&j, &b);
	}
	else
		exit(1);
}
