/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecarvalh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 18:03:31 by ecarvalh          #+#    #+#             */
/*   Updated: 2024/03/14 19:19:52 by ecarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *str, char const *delim)
{
	char	**res;

	auto char *tmp = ft_strdup(str);
	res = (char **)ft_calloc((ft_wordcount(str, delim) + 1), sizeof(char *));
	if (!res || !tmp)
	{
		free(tmp);
		free(res);
		return (NULL);
	}
	auto int i = 0;
	auto char *tok = ft_strtok(tmp, delim);
	while (tok)
	{
		res[i] = ft_strdup(tok);
		if (!res[i])
			return (ft_freesplit(res));
		tok = ft_strtok(NULL, delim);
		i++;
	}
	res[i] = NULL;
	free(tmp);
	return (res);
}
