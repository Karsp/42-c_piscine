/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daviles- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 17:12:49 by daviles-          #+#    #+#             */
/*   Updated: 2023/03/13 19:30:37 by daviles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef _LIBFT
#define _LIBFT

#include<stdlib.h>
#include<string.h>

void	ft_bzero(char *s, size_t n);
int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isalnum(int c);
int	ft_isascii(int c);
int	ft_isprint(int c);
void	*ft_memchr(const void *s, int c, size_t n);
void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memset(void *str, int value, size_t size);
char	*ft_strchr(const char *s, int c);
size_t	ft_strlcpy(char *restrict dst, const char *restrict src, \
		size_t dstsize);
unsigned long	ft_strlen(const char *s);
int	ft_strncmp(const char *s1, const char *s2, size_t size);
char	*ft_strrchr(const char *s, int c);
int	ft_tolower(int c);
int	ft_toupper(int c);

#endif
