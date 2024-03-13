/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mempcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecarvalh <ecarvalh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 17:53:20 by ecarvalh          #+#    #+#             */
/*   Updated: 2024/03/13 20:37:42 by ecarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_mempcpy(void *dest, const void *src, size_t n)
{
	char	*d;

	d = dest;
	if (!dest || !src)
		return (NULL);
	while (n--)
		*d++ = *((const char *)src++);
	return ((void *)d);
}
