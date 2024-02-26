/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecarvalh <ecarvalh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 18:51:11 by ecarvalh          #+#    #+#             */
/*   Updated: 2024/02/26 16:15:29 by ecarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strcspn(char const *str, char const *reject)
{
	size_t	i;

	i = 0;
	while (str[i] && !ft_strchr(reject, str[i]))
		i++;
	return (i);
}
