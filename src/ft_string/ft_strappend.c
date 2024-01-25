/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strappend.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecarvalh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 16:11:45 by ecarvalh          #+#    #+#             */
/*   Updated: 2024/01/25 17:19:14 by ecarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strappend(char **dest, char *src)
{
	char	*old_dest;

	if (!src)
	{
		*dest = NULL;
		return ;
	}
	if (!*dest)
	{
		*dest = ft_strdup(src);
		return ;
	}
	old_dest = *dest;
	*dest = ft_strjoin(*dest, src);
	free(old_dest);
}
