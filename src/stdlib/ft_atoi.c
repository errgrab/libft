/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecarvalh <ecarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 18:30:01 by ecarvalh          #+#    #+#             */
/*   Updated: 2024/04/10 23:17:13 by ecarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	res;
	int	sig;
	int	idx;

	res = 0;
	sig = 1;
	idx = ft_strspn(str, "\t\n\v\f\r ");
	if (ft_strchr("+-", str[idx]))
		if (str[idx++] == '-')
			sig *= -1;
	while (ft_isdigit(str[idx]))
		res = res * 10 + (str[idx++] - '0');
	return (sig * res);
}
