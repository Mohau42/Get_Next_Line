/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoloi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 09:03:51 by mmoloi            #+#    #+#             */
/*   Updated: 2019/06/18 10:11:24 by mmoloi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*k;
	char	*x;
	size_t	i;

	i = 0;
	if (!dst && !src)
		return (NULL);
	k = (char *)dst;
	x = (char *)src;
	while (i < n)
	{
		k[i] = x[i];
		i++;
	}
	return (dst);
}
