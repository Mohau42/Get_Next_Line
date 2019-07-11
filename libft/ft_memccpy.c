/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoloi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 13:32:36 by mmoloi            #+#    #+#             */
/*   Updated: 2019/06/18 11:42:44 by mmoloi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t	i;
	char	*k;
	char	*x;

	i = 0;
	k = (char *)dst;
	x = (char *)src;
	while (i < n)
	{
		k[i] = x[i];
		if ((unsigned char)x[i] == (unsigned char)c)
			return ((char *)k + i + 1);
		i++;
	}
	return (NULL);
}
