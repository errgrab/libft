/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecarvalh <ecarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 20:07:41 by ecarvalh          #+#    #+#             */
/*   Updated: 2024/04/10 15:28:39 by ecarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *restrict src, size_t sz)
{
	size_t	src_len;
	size_t	i;

	src_len = ft_strlen(src);
	if (sz <= 0)
		return (src_len);
	i = 0;
	while (src[i] && i < sz - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = 0;
	return (src_len);
}
