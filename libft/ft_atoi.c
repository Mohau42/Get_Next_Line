/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoloi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/15 10:53:44 by mmoloi            #+#    #+#             */
/*   Updated: 2019/06/28 10:46:07 by mmoloi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	unsigned long int	x;
	int					sign;
	char				*nstr;

	sign = 1;
	x = 0;
	nstr = (char *)str;
	while (*nstr == ' ' || *nstr == '\n' || *nstr == '\t' || *nstr == '\r' || \
			*nstr == '\v' || *nstr == '\f')
		nstr++;
	if (*nstr == '-' || *nstr == '+')
	{
		if (*nstr++ == '-')
			sign = -1;
	}
	while (ft_isdigit(*nstr))
		x = x * 10 + (*nstr++ - '0');
	if (x > 9223372036854775807)
		return (sign > 0 ? -1 : 0);
	return (sign * x);
}
