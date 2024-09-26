/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stdio.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecarvalh <ecarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 00:28:17 by ecarvalh          #+#    #+#             */
/*   Updated: 2024/04/11 00:38:41 by ecarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STDIO_H
# define STDIO_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char*s, int fd);
void	ft_putnbr_fd(int n, int fd);

char	*ft_getline_fd(int fd);

#endif
