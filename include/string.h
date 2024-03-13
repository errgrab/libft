/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecarvalh <ecarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 00:29:52 by ecarvalh          #+#    #+#             */
/*   Updated: 2024/03/13 20:53:25 by ecarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRING_H
# define STRING_H

char	*ft_strdup(const char *s);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
char	*ft_strnstr(const char *s1, const char *s2, size_t n);
char	*ft_strstr(const char *s1, const char *s2);
size_t	ft_strspn(char const *str, char const *accept);
size_t	ft_strcspn(char const *str, char const *reject);
char	*ft_strtok(char *str, char const *delim);
char	*ft_strtok_r(char *str, char const *delim, char **saveptr);
size_t	ft_strlen(const char *s);
char	*ft_stpcpy(char *dst, const char *src);
char	*ft_strcpy(char *dst, const char *src);
size_t	ft_strlcpy(char *dst, const char *src, size_t sz);
char	*ft_strcat(char *dst, const char *src);
size_t	ft_strlcat(char *dst, const char *src, size_t sz);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		ft_strcmp(const char *s1, const char *s2);

char	*ft_strjoin(char const *s1, char const*s2);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_strmapi(char const*s, char (*f)(unsigned int, char));
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
void	ft_strappend(char **dest, char *src);

void	ft_bzero(void *s, size_t n);

void	*ft_memset(void *s, int c, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_mempcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);

int		ft_wordcount(char const *str, char const *delim);
char	**ft_freesplit(char **str);

char	**ft_split(char const *str, char const *delim);
char	*ft_substr(char const *s, unsigned int start, size_t len);

#endif
