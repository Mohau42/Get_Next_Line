/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoloi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 10:59:46 by mmoloi            #+#    #+#             */
/*   Updated: 2019/06/18 11:41:30 by mmoloi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char		*k;
	char		*x;
	size_t		i;

	i = 0;
	k = (char *)s1;
	x = (char *)s2;
	while (i < n)
	{
		if (k[i] != x[i])
			return ((unsigned char)k[i] - (unsigned char)x[i]);
		i++;
	}
	return (0);
}
