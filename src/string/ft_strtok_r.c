/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtok_r.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecarvalh <ecarvalh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 15:39:56 by ecarvalh          #+#    #+#             */
/*   Updated: 2024/03/05 16:28:01 by ecarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtok_r(char *str, char const *delim, char **saveptr)
{
	if (str)
		*saveptr = str;
	if (!*saveptr)
		return (NULL);
	str = *saveptr + ft_strspn(*saveptr, delim);
	*saveptr = str + ft_strcspn(str, delim);
	if (*saveptr == str)
		return (*saveptr = NULL, *saveptr);
	if (**saveptr)
		*(*saveptr)++ = '\0';
	else
		*saveptr = NULL;
	return (str);
}
