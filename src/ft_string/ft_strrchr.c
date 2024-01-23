/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecarvalh <ecarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 22:30:10 by ecarvalh          #+#    #+#             */
/*   Updated: 2023/10/11 18:36:26 by ecarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = ft_strlen(s);
	if (!((unsigned char)c))
		return ((char *)&s[i]);
	while (i--)
		if (s[i] == (unsigned char)c)
			return ((char *)&s[i]);
	return (NULL);
}
