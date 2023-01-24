/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khallal <khallal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 20:38:33 by khallal           #+#    #+#             */
/*   Updated: 2023/01/17 13:49:28 by khallal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

static int	ft_cont(char const *s, char c)
{
	int	i;
	int	cont;

	i = 0;
	cont = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i] != c && s[i])
			cont++;
		while (s[i] != c && s[i])
			i++;
	}
	return (cont);
}

static char	*writeworld(char const *s, char c)
{
	int		i;
	int		j;
	char	*km;

	i = 0;
	while (s[i] != c && s[i])
		i++;
	km = (char *)malloc(sizeof(char) * (i + 1));
	if (!km)
		return (0);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c)
			km[j] = s[i];
		if (s[i] == c)
			break ;
		j++;
		i++;
	}
	km[j] = '\0';
	return (km);
}

static char	**ft_free(char **h, int i)
{
	i -= 1;
	while (i >= 0)
	{
		free(h[i]);
		i--;
	}
	free(h);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	char	**hm;

	if (!s)
		return (0);
	i = 0;
	hm = (char **)malloc(sizeof(char *) * (ft_cont(s, c) + 1));
	if (!hm)
		return (0);
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s == '\0')
			break ;
		hm[i] = writeworld(s, c);
		if (hm[i] == NULL)
			return (ft_free(hm, i));
		while (*s && *s != c)
			s++;
		i++;
	}
	hm[i] = 0;
	return (hm);
}
