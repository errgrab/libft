/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecarvalh <ecarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 19:05:32 by ecarvalh          #+#    #+#             */
/*   Updated: 2023/09/08 20:03:37 by ecarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	void	*odest;

	odest = dest;
	if (dest < src)
	{
		while (n--)
			*(char *)(dest++) = *(const char *)(src++);
	}
	else
	{
		dest += n;
		src += n;
		while (n--)
			*(char *)(--dest) = *(const char *)(--src);
	}
	return (dest);
}
