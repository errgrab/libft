/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecarvalh <ecarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 18:54:42 by ecarvalh          #+#    #+#             */
/*   Updated: 2023/10/03 20:39:56 by ecarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*d;

	d = dest;
	if (dest == NULL && src == NULL)
		return (NULL);
	while (n--)
		*d++ = *((const unsigned char *)src++);
	return (dest);
}
