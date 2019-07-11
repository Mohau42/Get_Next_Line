/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoloi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/03 16:14:41 by mmoloi            #+#    #+#             */
/*   Updated: 2019/07/05 14:30:11 by mmoloi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	newl(char *buf)
{
	int	i;

	i = 0;
	while (buf[i] && buf[i] != '\n')
		i++;
	if (buf[i] == '\n')
		return (1);
	return (0);
}

int	get_line(const int fd, char *buf, char *ptr[fd])
{
	int		x;
	char	*temp;

	while ((newl(buf) != 1) && ((x = read(fd, buf, BUFF_SIZE)) > 0))
	{
		buf[x] = '\0';
		temp = ptr[fd];
		ptr[fd] = ft_strjoin(temp, buf);
		ft_strdel(&temp);
	}
	ft_strdel(&buf);
	if (x < 0)
		return (-1);
	return (1);
}

int	get_next_line(const int fd, char **line)
{
	int			x;
	char		*buf;
	char		*str;
	char		*temp;
	static char *ptr[2147483647];

	if (fd < 0 || !line || BUFF_SIZE < 1)
		return (-1);
	buf = ft_strnew(BUFF_SIZE);
	if (!ptr[fd])
		ptr[fd] = ft_strnew(0);
	if ((x = get_line(fd, buf, ptr)) == -1)
		return (-1);
	if ((str = ft_strchr(ptr[fd], '\n')))
	{
		*line = ft_strsub(ptr[fd], 0, str - ptr[fd]);
		temp = ptr[fd];
		ptr[fd] = ft_strdup(str + 1);
		ft_strdel(&temp);
		return (1);
	}
	*line = ft_strdup(ptr[fd]);
	ft_strdel(&ptr[fd]);
	return (ft_strlen(*line) > 0 ? 1 : 0);
}
