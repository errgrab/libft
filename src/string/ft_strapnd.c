/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strapnd.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecarvalh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 16:11:45 by ecarvalh          #+#    #+#             */
/*   Updated: 2024/04/10 17:06:18 by ecarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strapnd(char *dest, char const *src)
{
	char	*res;

	if (!src)
		return (dest);
	if (!dest)
		return (ft_strdup(src));
	res = ft_strjoin(dest, src);
	free(dest);
	return (res);
}
