/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecarvalh <ecarvalh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 18:46:45 by ecarvalh          #+#    #+#             */
/*   Updated: 2024/02/21 12:35:11 by ecarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strspn(char const *str, char const *accept)
{
	int	i;

	i = 0;
	while (str[i] && ft_strchr(accept, str[i]))
		i++;
	return (i);
}
