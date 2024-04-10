/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecarvalh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 12:11:20 by ecarvalh          #+#    #+#             */
/*   Updated: 2023/10/11 18:49:37 by ecarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (f)(size_t, char))
{
	char	*res;
	size_t	i;

	if (!s || !f)
		return (NULL);
	res = (char *)ft_calloc(sizeof(char), ft_strlen(s) + 1);
	if (!res)
		return (NULL);
	i = (ssize_t)-1;
	while (s[++i])
		res[i] = f(i, s[i]);
	res[i] = '\0';
	return (res);
}
