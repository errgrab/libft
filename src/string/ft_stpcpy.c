/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stpcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecarvalh <ecarvalh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 18:01:25 by ecarvalh          #+#    #+#             */
/*   Updated: 2024/03/13 20:07:33 by ecarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_stpcpy(char *restrict dst, const char *restrict src)
{
	char	*p;

	p = ft_mempcpy(dst, src, ft_strlen(src));
	*p = 0;
	return (p);
}
