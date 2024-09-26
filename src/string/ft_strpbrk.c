/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecarvalh <ecarvalh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 23:07:37 by ecarvalh          #+#    #+#             */
/*   Updated: 2024/04/10 23:29:04 by ecarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strpbrk(char const *str, char const *accept)
{
	char const	*res;

	res = str + ft_strcspn(str, accept);
	if (!*res)
		return (NULL);
	return ((char *)res);
}
