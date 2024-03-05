/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecarvalh <ecarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 20:23:31 by ecarvalh          #+#    #+#             */
/*   Updated: 2023/09/10 22:18:35 by ecarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *restrict src, size_t sz)
{
	size_t	dst_len;
	size_t	src_len;

	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	if (sz <= dst_len)
		return (src_len + sz);
	if (src_len < sz - dst_len)
		ft_strlcpy(dst + dst_len, src, src_len + 1);
	else
		ft_strlcpy(dst + dst_len, src, sz - dst_len);
	return (dst_len + src_len);
}
