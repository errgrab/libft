/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecarvalh <ecarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 19:05:32 by ecarvalh          #+#    #+#             */
/*   Updated: 2023/10/07 17:34:31 by ecarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d;

	d = dest;
	if (d < (unsigned char *)src)
		return (ft_memcpy(dest, src, n));
	else if (d > (unsigned char *)src)
		while (n--)
			d[n] = ((unsigned char *)src)[n];
	return (dest);
}
