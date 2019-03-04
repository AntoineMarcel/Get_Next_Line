/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/24 10:34:35 by amarcel           #+#    #+#             */
/*   Updated: 2019/03/04 14:46:30 by amarcel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static int		check_end(char *str, char **line)
{
	static int c;

	*line = ft_strdup(str);
	free(str);
	if (c != 1 && str[0] != '\0')
	{
		c = 1;
		return (1);
	}
	return (0);
}

static char		*ft_cpytostr(char *str, char *buf, int ret)
{
	char *tmp;

	buf[ret] = '\0';
	tmp = str;
	str = ft_strjoin(tmp, buf);
	free(tmp);
	return (str);
}

int				get_next_line(const int fd, char **line)
{
	int				ret;
	char			buf[BUFF_SIZE + 1];
	char			*str;
	static char		*debut;

	if (fd < 0 || !line || BUFF_SIZE <= 0)
		return (-1);
	if (!debut)
		if (!(debut = (char*)malloc(sizeof(char))))
			return (-1);
	str = ft_strdup(debut);
	while (!ft_strchr(str, '\n'))
	{
		ret = read(fd, buf, BUFF_SIZE);
		if (ret == -1)
			return (-1);
		str = ft_cpytostr(str, buf, ret);
		if (ret == 0)
			return (check_end(str, line));
	}
	*line = ft_strsub(str, 0, ft_strchr(str, '\n') - str);
	free(debut);
	debut = ft_strdup(ft_strchr(str, '\n') + 1);
	free(str);
	return (1);
}
