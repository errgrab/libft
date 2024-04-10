/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecarvalh <ecarvalh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 18:51:11 by ecarvalh          #+#    #+#             */
/*   Updated: 2024/04/10 22:10:58 by ecarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strcspn(char const *str, char const *reject)
{
	size_t	len;

	len = 0;
	while (str[len] && !ft_strchr(reject, str[len]))
		len++;
	return (len);
}
