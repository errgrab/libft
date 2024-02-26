/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getline_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecarvalh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 16:06:05 by ecarvalh          #+#    #+#             */
/*   Updated: 2024/02/24 14:14:13 by ecarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_getline_fd(int fd)
{
	int		was_read;
	char	buf[2];
	char	*line;

	line = NULL;
	was_read = read(fd, &buf, 1);
	while (was_read > 0)
	{
		buf[was_read] = 0;
		ft_strappend(&line, buf);
		if (*buf == '\n')
			break ;
		was_read = read(fd, &buf, 1);
	}
	if (was_read < 0)
	{
		free(line);
		return (NULL);
	}
	return (line);
}
