/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wordcount.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecarvalh <ecarvalh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 18:55:06 by ecarvalh          #+#    #+#             */
/*   Updated: 2024/02/12 18:58:50 by ecarvalh         ###   ########.fr       */
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
		i += ft_strspn(str, delim);
		if (str[i])
		{
			i += ft_strcspn(str, delim);
			count++;
		}
	}
	return (count);
}
