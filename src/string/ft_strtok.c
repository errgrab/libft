/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtok.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecarvalh <ecarvalh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 19:09:26 by ecarvalh          #+#    #+#             */
/*   Updated: 2024/03/05 15:58:15 by ecarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtok(char *str, char const *delim)
{
	static char	*buf;

	if (str)
		buf = str;
	if (!buf)
		return (NULL);
	str = buf + ft_strspn(buf, delim);
	buf = str + ft_strcspn(str, delim);
	if (buf == str)
		return (buf = NULL, buf);
	if (*buf)
		*(buf++) = '\0';
	else
		buf = NULL;
	return (str);
}
