/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khallal <khallal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 20:21:56 by khallal           #+#    #+#             */
/*   Updated: 2023/01/17 12:04:36 by khallal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

char	*getf(char *p)
{
	char	*s;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (p[i] != '\n' && p[i] != '\0')
		i++;
	if (p[i++] == '\0')
	{
		free(p);
		return (NULL);
	}
	while (p[i + j] != '\0')
		j++;
	s = malloc(j + 1);
	if (!s)
		return (NULL);
	j = 0;
	while (p[i] != '\0')
		s[j++] = p[i++];
	s[j] = '\0';
	free(p);
	return (s);
}

char	*get_line(char *h)
{
	char	*p;
	int		i;

	i = 0;
	if (!h)
		return (NULL);
	while (h[i] != '\n' && h[i])
		i++;
	p = malloc(i + 2);
	if (!p)
		return (NULL);
	i = 0;
	while (h[i] && h[i] != '\n')
	{
		p[i] = h[i];
		i++;
	}
	if (h[i] == '\n')
	{
		p[i] = h[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}

char	*get_next(int fd, char *h)
{
	char	*p;
	int		i;

	i = 1;
	p = ft_calloc((BUFFER_SIZE + 1), 1);
	if (!p)
		return (NULL);
	while (!ft_strchr(h, '\n') && i != 0)
	{
		i = read(fd, p, BUFFER_SIZE);
		if (i == -1)
		{
			free(p);
			free(h);
			return (0);
		}
		p[i] = '\0';
		h = ft_strjoin0(h, p);
	}
	free(p);
	return (h);
}

char	*get_next_line(int fd)
{
	static char	*k;
	char		*j;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	k = get_next(fd, k);
	if (!k)
	{
		free(k);
		return (NULL);
	}
	j = get_line(k);
	k = getf(k);
	if (j[0] == '\0')
	{
		free(j);
		return (NULL);
	}
	return (j);
}
