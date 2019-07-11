/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoloi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/15 11:24:05 by mmoloi            #+#    #+#             */
/*   Updated: 2019/06/24 14:46:03 by mmoloi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		x;
	int		y;
	char	*k;

	x = 0;
	y = 0;
	if (!s1 || !s2)
		return (NULL);
	k = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (k == NULL)
		return (NULL);
	while (s1[x] != '\0')
	{
		k[x] = s1[x];
		x++;
	}
	while (s2[y] != '\0')
	{
		k[x + y] = s2[y];
		y++;
	}
	k[x + y] = '\0';
	return (k);
}
