/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khallal <khallal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 14:02:12 by khallal           #+#    #+#             */
/*   Updated: 2023/01/17 11:58:28 by khallal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	sort_tab(int *k, int l)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	while (i < l)
	{
		j = i;
		while (j < l)
		{
			if (k[i] > k[j])
			{
				tmp = k[j];
				k[j] = k[i];
				k[i] = tmp;
			}
			j++;
		}
		i++;
	}
}

int	*creat_tabl(t_list **a)
{
	int		i;
	int		*k;
	t_list	*tmp;
	int		j;

	j = 0;
	i = ft_lstsize(*a);
	tmp = (*a);
	k = malloc(sizeof(int) * i);
	while (tmp)
	{
		k[j] = tmp->content;
		tmp = tmp->next;
		j++;
	}
	sort_tab(k, i);
	return (k);
}

int	cherche(int *k, t_list **a, int start, int end)
{
	t_list	*tmp;
	int		j;

	j = 0;
	tmp = (*a);
	while (tmp)
	{
		j = start;
		while (j <= end)
		{
			if (k[j] == tmp->content)
				break ;
			j++;
		}
		if (k[j] == tmp->content)
			break ;
		tmp = tmp->next;
	}
	return (k[j]);
}

int	ft_exist(int i, t_list **b)
{
	t_list	*tmp;

	tmp = (*b);
	while (tmp)
	{
		if (i == tmp->content)
			return (1);
		tmp = tmp->next;
	}
	return (0);
}

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*k;

	k = lst;
	while (k->next)
	{
		k = k->next;
	}
	return (k);
}
