/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecarvalh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 18:03:31 by ecarvalh          #+#    #+#             */
/*   Updated: 2024/04/10 18:36:26 by ecarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *str, char const *delim)
{
	char		**res;
	char const	*tok;
	int			i;

	res = (char **)ft_calloc(sizeof(char *), ft_wordcount(str, delim) + 1);
	if (!res)
		return (free(res), NULL);
	tok = str + ft_strspn(str, delim);
	str = tok + ft_strcspn(tok, delim);
	i = -1;
	while (*tok)
	{
		res[++i] = ft_strndup(tok, str - tok);
		if (!res[i])
			return (ft_freesplit(res));
		tok = str + ft_strspn(str, delim);
		str = tok + ft_strcspn(tok, delim);
	}
	res[++i] = NULL;
	return (res);
}
