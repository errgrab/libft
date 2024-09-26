/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecarvalh <ecarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 19:05:32 by ecarvalh          #+#    #+#             */
/*   Updated: 2024/04/10 14:55:14 by ecarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	void	*d;

	if (!dest || !src)
		return (NULL);
	d = dest;
	if (dest <= src)
		return (ft_memcpy(dest, src, n));
	while (n--)
		((char *)dest)[n] = ((char *)src)[n];
	return (d);
}
