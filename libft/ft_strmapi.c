/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoloi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 11:46:04 by mmoloi            #+#    #+#             */
/*   Updated: 2019/06/24 12:00:36 by mmoloi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t		i;
	char		*x;

	i = 0;
	if (!s || !f)
		return (NULL);
	x = (char *)malloc(sizeof(char) * (ft_strlen(s)) + 1);
	if (x == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		x[i] = f(i, s[i]);
		i++;
	}
	x[i] = '\0';
	return (x);
}
