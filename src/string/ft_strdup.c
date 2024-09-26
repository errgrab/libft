/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecarvalh <ecarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 19:48:53 by ecarvalh          #+#    #+#             */
/*   Updated: 2024/04/12 16:24:09 by ecarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*res;
	size_t	len;

	if (!s)
		return (NULL);
	len = ft_strlen(s);
	res = (char *)ft_calloc(sizeof(char), len + 1);
	if (!res)
		return (NULL);
	ft_memcpy(res, s, len);
	res[len] = '\0';
	return (res);
}
