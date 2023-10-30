/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hclaude <hclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 15:24:01 by hclaude           #+#    #+#             */
/*   Updated: 2023/10/30 17:13:27 by hclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>
# include <stdlib.h>
# include <stdio.h>

// # define NULL ((void *)0)

typedef unsigned long int	t_size_t;

int				ft_toupper(int c);
int				ft_tolower(int c);
char			*ft_strrchr(const char *s, int c);
char			*ft_strnstr(const char *big, const char *little, t_size_t len);
int				ft_strncmp(const char *s1, const char *s2, t_size_t n);
t_size_t		ft_strlen(const char *s);
t_size_t		ft_strlcpy(char *dst, const char *src, t_size_t dstsize);
t_size_t		ft_strlcat(char *dst, const char *src, t_size_t size);
char			*ft_strchr(const char *s, int c);
void			*ft_memset(void *s, int c, t_size_t n);
void			*ft_memmove(void *dst, const void *src, t_size_t len);
void			*ft_memcpy(void *dst, const void *src, t_size_t n);
int				ft_memcmp(const void *s1, const void *s2, t_size_t n);
void			*ft_memchr(const void *s, int c, t_size_t n);
int				ft_isprint(int c);
int				ft_isdigit(int a);
int				ft_isascii(int a);
int				ft_isalpha(int a);
int				ft_isalnum(int a);
void			ft_bzero(void *s, t_size_t n);
int				ft_atoi(const char *nptr);
void			*ft_calloc(t_size_t nmemb, t_size_t size);
char			*ft_strdup(const char *s);
char			*ft_substr(char const *s, unsigned int start, t_size_t len);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_strtrim(char const *s1, char const *set);

#endif