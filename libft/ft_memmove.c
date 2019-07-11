/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoloi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 11:44:34 by mmoloi            #+#    #+#             */
/*   Updated: 2019/06/12 16:19:31 by mmoloi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char	*k;
	char	*x;
	size_t	i;

	k = (char *)dst;
	x = (char *)src;
	i = 0;
	if (!dst && !src)
		return (NULL);
	if (x < k)
	{
		while (n-- > 0)
			k[n] = x[n];
	}
	else
	{
		while (i < n)
		{
			k[i] = x[i];
			i++;
		}
	}
	return (k);
}
