/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ctype.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecarvalh <ecarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 10:41:19 by ecarvalh          #+#    #+#             */
/*   Updated: 2024/01/23 00:27:47 by ecarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_CTYPE_H
# define FT_CTYPE_H

int	ft_isalnum(int c);
int	ft_isalpha(int c);
int	ft_isascii(int c);
int	ft_isdigit(int c);
int	ft_isprint(int c);

int	ft_toupper(int c);
int	ft_tolower(int c);

#endif
