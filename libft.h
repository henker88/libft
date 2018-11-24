/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgendry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 14:31:20 by sgendry           #+#    #+#             */
/*   Updated: 2018/11/23 16:13:34 by sgendry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <string.h>

int		ft_atoi(const char *str);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
char	*ft_strcat(char *s1, const char *s2);
char	*ft_strchr(const char *s, int c);
int		ft_strcmp(const char *s1, const char *s2);
char	*ft_strcpy(char *dst, const char *src);
char	*ft_strdup(const char *s1);
size_t	ft_strlen(const char *s);
char	*ft_strncat(char *s1, const char *s2, size_t n);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strncpy(char *dst, const char *src, size_t len);
char	*ft_strrchar(const char *s, int c);
int		ft_tolower(int c);
int		ft_toupper(int c);

//size_t	strlcat(char *dst, const char *src, size_t size);
void 	*ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *s, size_t n);
//void	*memcpy(void *dst, const void *src, size_t n);
//void	*memmove(void *dst, const void *src, size_t len);
//void	*memchr(const void *s, int c, size_t n);
//int		memcmp(const void *s1, const void *s2, size_t n); */

#endif
