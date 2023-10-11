/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecarvalh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 15:10:59 by ecarvalh          #+#    #+#             */
/*   Updated: 2023/10/07 15:59:35 by ecarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isinset(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
		if (c == (char)set[i++])
			return (1);
	return (0);
}

static int	ft_start(char const *s1, char const *set)
{
	int	i;

	i = 0;
	while (s1[i] && ft_isinset(s1[i], set))
		i++;
	return (i);
}

static int	ft_end(char const *s1, char const *set)
{
	int	i;

	i = ft_strlen(s1) - 1;
	while (i > 0 && ft_isinset(s1[i], set))
		i--;
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	int		i;
	char	*str;

	if (!s1 || !set)
		return (NULL);
	start = ft_start(s1, set);
	end = ft_end(s1, set);
	if (end < start)
		return (ft_strdup(""));
	str = (char *)malloc(sizeof(char) * (end - start + 2));
	if (str == NULL)
		return (NULL);
	i = 0;
	while (start <= end)
		str[i++] = s1[start++];
	str[i] = '\0';
	return (str);
}
