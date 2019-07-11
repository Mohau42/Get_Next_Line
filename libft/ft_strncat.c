/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoloi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/19 13:45:29 by mmoloi            #+#    #+#             */
/*   Updated: 2019/06/22 10:56:01 by mmoloi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	unsigned	len1;
	unsigned	len2;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	if (len2 < n)
	{
		ft_strcpy(&s1[len1], s2);
	}
	else
	{
		ft_strncpy(&s1[len1], s2, n);
		s1[len1 + n] = '\0';
	}
	return (s1);
}
