/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wordcount.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecarvalh <ecarvalh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 18:55:06 by ecarvalh          #+#    #+#             */
/*   Updated: 2024/02/13 14:20:58 by ecarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_wordcount(char const *str, char const *delim)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (str[i])
	{
		i += ft_strspn(&str[i], delim);
		if (str[i])
		{
			i += ft_strcspn(&str[i], delim);
			count++;
		}
	}
	return (count);
}
