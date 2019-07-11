/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoloi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/14 10:59:10 by mmoloi            #+#    #+#             */
/*   Updated: 2019/06/23 11:25:31 by mmoloi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	unsigned int	q;
	unsigned int	x;

	q = 0;
	if (s1[0] == '\0' && s2[0] == '\0')
		return ((char *)s1);
	while (s1[q] != '\0')
	{
		x = 0;
		while (s2[x] != '\0' && s1[q + x] == s2[x])
			x++;
		if (s2[x] == '\0')
			return ((char *)s1 + q);
		q++;
	}
	return (NULL);
}
