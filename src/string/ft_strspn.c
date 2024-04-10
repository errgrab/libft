/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecarvalh <ecarvalh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 18:46:45 by ecarvalh          #+#    #+#             */
/*   Updated: 2024/04/07 18:12:25 by ecarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strspn(char const *str, char const *accept)
{
	size_t	len;

	len = 0;
	while (str[len] && ft_strchr(accept, str[len]))
		len++;
	return (len);
}
