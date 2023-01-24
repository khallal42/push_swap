/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khallal <khallal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 20:17:12 by khallal           #+#    #+#             */
/*   Updated: 2023/01/23 18:50:43 by khallal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
		k = ft_strjoin_m(k, av[i]);
		k = ft_strjoin_m(k, " ");
		i++;
	}
	return (k);
}

void	list_sort(t_list *j)
{
	check_double(&j);
	if (check_sort(&j))
		exit(1);
}

int	main(int ac, char **av)
{
	int		i;
	char	*k;
	char	**ar;
	t_list	*j;
	t_list	*b;

	j = NULL;
	b = NULL;
	if (ac == 1)
		exit(1);
	k = av_join(av);
	check_arg(k);
	ar = ft_split(k, ' ');
	i = -1;
	while (ar[++i])
		ft_lstadd_back(&j, ft_lstnew(ft_atoi(ar[i])));
	list_sort(j);
	if (ft_lstsize(j) >= 2 && ft_lstsize(j) < 4)
		sort3(&j);
	else if (ft_lstsize(j) >= 4 && ft_lstsize(j) <= 25)
		sort5(&j, &b);
	else if (ft_lstsize(j) >= 26 && ft_lstsize(j) <= 250)
		sort100(&j, &b);
	else
		sort500(&j, &b);
}
