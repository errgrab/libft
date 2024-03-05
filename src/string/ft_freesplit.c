/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_freesplit.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecarvalh <ecarvalh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 19:03:17 by ecarvalh          #+#    #+#             */
/*   Updated: 2024/02/12 20:20:16 by ecarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_freesplit(char **str)
{
	int	i;

	i = -1;
	while (str[++i])
		free(str[i]);
	free(str);
	return (NULL);
}
