/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khallal <khallal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 14:11:49 by khallal           #+#    #+#             */
/*   Updated: 2023/01/23 18:57:29 by khallal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*khalifa;
	int		j;

	i = 0;
	j = ft_strlen(s1);
	khalifa = malloc(sizeof(char) * (j + 1));
	if (!(khalifa))
		return (NULL);
	while (s1[i])
	{
		khalifa[i] = ((char *)s1)[i];
		i++;
	}
	khalifa[i] = '\0';
	return (khalifa);
}

char	*ft_strjoin_m(char *s1, char *s2)
{
	int		i;
	int		j;
	char	*k;

	i = -1;
	j = 0;
	if (!s2)
		return (NULL);
	if (!s1)
		return (ft_strdup(s2));
	k = malloc((ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!(k))
		return (NULL);
	while (s1[++i])
		k[i] = s1[i];
	while (s2[j])
	{
		k[i] = s2[j];
		i++;
		j++;
	}
	k[i] = '\0';
	free(s1);
	return (k);
}
