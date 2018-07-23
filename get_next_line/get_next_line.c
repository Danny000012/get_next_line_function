/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dseabel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/13 12:15:27 by dseabel           #+#    #+#             */
/*   Updated: 2018/06/16 18:48:59 by dseabel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static int	read_to_stock(int const fd, char **info)
{
	char	*buff;
	int		val;
	char	*temp;

	if (!(buff = (char *)malloc(sizeof(*buff) * (BUFF_SIZE + 1))))
		return (-1);
	val = read(fd, buff, BUFF_SIZE);
	if (val > 0)
	{
		buff[val] = '\0';
		temp = ft_strjoin(*info, buff);
		free(*info);
		*info = temp;
	}
	free(buff);
	return (val);
}

int			get_next_line(int const fd, char **line)
{
	char		*str;
	int			val;
	static char *info = NULL;

	if ((!info && (info = (char *)malloc(sizeof(*info))) == NULL) || !line
			|| fd < 0 || BUFF_SIZE < 0)
		return (-1);
	str = ft_strchr(info, '\n');
	while (str == NULL)
	{
		val = read_to_stock(fd, &info);
		if (val == 0)
		{
			if (ft_strlen(info) == 0)
				return (0);
			info = ft_strjoin(info, "\n");
		}
		if (val < 0)
			return (-1);
		else
			str = ft_strchr(info, '\n');
	}
	*line = ft_strsub(info, 0, ft_strlen(info) - ft_strlen(str));
	info = ft_strdup(str + 1);
	return (1);
}
