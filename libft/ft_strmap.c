/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoloi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 11:37:15 by mmoloi            #+#    #+#             */
/*   Updated: 2019/06/24 11:59:52 by mmoloi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	size_t		i;
	char		*k;

	i = 0;
	if (!s || !f)
		return (NULL);
	k = (char *)malloc(sizeof(char) * (ft_strlen(s)) + 1);
	if (k == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		k[i] = f(s[i]);
		i++;
	}
	k[i] = '\0';
	return (k);
}
