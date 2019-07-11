/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoloi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/22 14:52:34 by mmoloi            #+#    #+#             */
/*   Updated: 2019/06/29 02:34:59 by mmoloi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int			ft_count(char const *s, char c)
{
	int		i;
	int		counter;

	i = 0;
	counter = 0;
	while (*s != '\0')
	{
		if (i == 1 && *s == c)
			i = 0;
		if (i == 0 && *s != c)
		{
			i = 1;
			counter++;
		}
		s++;
	}
	return (counter);
}

static	int			ft_lenwrd(const char *s, char c)
{
	int		len;

	len = 0;
	while (*s != c && *s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

char				**ft_strsplit(const char *s, char c)
{
	int			j;
	int			i;
	char		**tab;

	i = 0;
	if (!s || !c)
		return (NULL);
	j = ft_count((const char *)s, c);
	tab = malloc(sizeof(*tab) * (ft_count((const char *)s, c)) + 1);
	if (tab == NULL)
		return (NULL);
	while (j--)
	{
		while (*s == c && *s != '\0')
			s++;
		tab[i] = ft_strsub((const char *)s, 0, ft_lenwrd((const char *)s, c));
		if (tab[i] == NULL)
			return (NULL);
		s = s + ft_lenwrd(s, c);
		i++;
	}
	tab[i] = NULL;
	return (tab);
}
