/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecarvalh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 19:03:42 by ecarvalh          #+#    #+#             */
/*   Updated: 2023/10/14 19:40:55 by ecarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_intlen(int n)
{
	int				len;
	unsigned int	nb;

	len = 1;
	nb = n;
	if (n < 0)
	{
		nb = -n;
		len++;
	}
	while (nb >= 10)
	{
		nb /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char			*str;
	int				intlen;
	unsigned int	nb;

	intlen = ft_intlen(n);
	str = (char *)ft_calloc(intlen + 1, sizeof(char));
	if (!str)
		return (NULL);
	str[intlen] = '\0';
	nb = n;
	if (n < 0)
	{
		str[0] = '-';
		nb = -n;
	}
	while (intlen-- > 0 && str[intlen] != '-')
	{
		str[intlen] = (nb % 10) + '0';
		nb /= 10;
	}
	return (str);
}
/*
#include <stdio.h>
int main(int argc, char **argv)
{
	if (argc == 2)
		printf("%s\n", ft_itoa(atoi(argv[1])));
	return (0);
}
*/
