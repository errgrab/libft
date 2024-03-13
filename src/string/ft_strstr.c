/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecarvalh <ecarvalh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 20:28:55 by ecarvalh          #+#    #+#             */
/*   Updated: 2024/03/13 20:32:34 by ecarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(char const *s1, char const *s2)
{
	size_t	s2_len;

	if (!*s2)
		return ((char *)s1);
	s2_len = ft_strlen(s2);
	while (*s1)
		if (!ft_strncmp(s1++, s2, s2_len))
			return ((char *)--s1);
	return (NULL);
}
