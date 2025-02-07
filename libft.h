/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgarcia- <vgarcia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 13:15:03 by vgarcia-          #+#    #+#             */
/*   Updated: 2025/02/07 16:56:33 by vgarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>

int				ft_isascii(int c);
int				ft_isprint(int c);
int				ft_isalpha(int c);
int				ft_isdigit(int c);
int				ft_isalnum(int c);

int				ft_tolower(int c);
int				ft_toupper(int c);

void			ft_bzero(void *ptr, size_t len);
void			*ft_memset(void *ptr, int value, size_t len);
void			*ft_memcpy(void *dest, const void *src, size_t len);
void			*ft_memmove(void *dest, const void *src, size_t len);
void			*ft_memchr(const void *s, int c, size_t n);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
char			*ft_strdup(const char *src);

void			*ft_calloc(size_t nmemb, size_t size);

size_t			ft_strlen(const char *str);

char			*ft_strchr(const char *str, int c);
char			*ft_strrchr(const char *str, int c);

char			*ft_strnstr(const char *big, const char *little, size_t len);

int				ft_strncmp(const char *src1, const char *src2, size_t len);

size_t			ft_strlcpy(char *dst, const char *src, size_t dstsize);

size_t			ft_strlcat(char *dst, const char *src, size_t dstsize);

char			*ft_substr(char const *s, unsigned int start, size_t len);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_strtrim(char const *s1, char const *set);
char			**ft_split(char const *str, char c);
char			*ft_strmapi(char const *old, char (*fx)(unsigned int, char));
void			ft_striteri(char *str, void (*fx)(unsigned int, char*));

void			ft_putchar_fd(char c, int fd);
void			ft_putstr_fd(char *str, int fd);
void			ft_putendl_fd(char *str, int fd);
void			ft_putnbr_fd(int n, int fd);

int				ft_atoi(const char *str);

char			*ft_itoa(int n);

#endif