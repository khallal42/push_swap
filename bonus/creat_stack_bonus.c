/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   creat_stack_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khallal <khallal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 20:15:56 by khallal           #+#    #+#             */
/*   Updated: 2023/01/17 13:34:29 by khallal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

t_list	*ft_lstnew(int content)
{
	t_list	*head;

	head = malloc(sizeof(t_list));
	head->content = content;
	head->next = NULL;
	return (head);
}

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!(*lst))
	{
		*lst = new;
	}
	else if (new)
	{
		new->next = *lst;
		*lst = new;
	}
}

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*k;

	k = *lst;
	if (*lst != NULL)
	{
		while (k->next)
		{
			k = k->next;
		}
		k->next = new;
	}
	else
		*lst = new;
}

int	check_sort(t_list **lst)
{
	t_list	*k;

	if (!(*lst))
		return (0);
	k = *lst;
	while (k->next)
	{
		if (k->content > k->next->content)
			return (0);
		k = k->next;
	}
	return (1);
}
