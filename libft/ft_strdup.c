/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoloi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 14:05:50 by mmoloi            #+#    #+#             */
/*   Updated: 2019/06/20 14:33:00 by mmoloi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*k;
	size_t	i;

	i = 0;
	k = (char *)malloc(sizeof(char) * ft_strlen(s1) + 1);
	if (k == NULL)
		return (NULL);
	while (s1[i])
	{
		k[i] = s1[i];
		i++;
	}
	k[i] = '\0';
	return (k);
}
