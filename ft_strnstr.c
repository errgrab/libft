/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecarvalh <ecarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 22:54:48 by ecarvalh          #+#    #+#             */
/*   Updated: 2023/09/10 23:09:17 by ecarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	s2_len;

	if (!*s2)
		return ((char *)s1);
	s2_len = ft_strlen(s2);
	while (*s1 && n-- >= s2_len)
		if (ft_strncmp(s1++, s2, s2_len) == 0)
			return ((char *)--s1);
	return (NULL);
}
