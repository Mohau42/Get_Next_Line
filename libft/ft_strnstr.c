/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoloi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/27 15:51:13 by mmoloi            #+#    #+#             */
/*   Updated: 2019/06/27 15:51:24 by mmoloi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *substr, size_t len)
{
	size_t	i;
	size_t	cnt;

	i = 0;
	if (!*substr)
		return ((char *)str);
	while (str[i] != '\0' && i < len)
	{
		cnt = 0;
		while (substr[cnt])
		{
			if (substr[cnt] == str[i + cnt])
				cnt++;
			else
				break ;
		}
		if (!substr[cnt] && len >= i + cnt)
			return ((char *)(str + i));
		i++;
	}
	return (NULL);
}
