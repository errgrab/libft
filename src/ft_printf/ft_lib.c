/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lib.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecarvalh <ecarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 13:25:23 by ecarvalh          #+#    #+#             */
/*   Updated: 2024/01/25 16:57:51 by ecarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_based(size_t n, char *base)
{
	int		len;
	size_t	base_len;

	len = 0;
	base_len = ft_strlen(base);
	if (n >= base_len)
		len += ft_based(n / base_len, base);
	len += write(1, &base[n % base_len], 1);
	return (len);
}

int	ft_nbrlen(size_t nbr, int base_len)
{
	int		len;

	len = 0;
	if (nbr == 0)
		return (1);
	while (nbr)
	{
		nbr /= base_len;
		len++;
	}
	return (len);
}
