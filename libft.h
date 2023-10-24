#ifndef LIBFT_H
#define LIBFT_H

#define NULL ((void *)0)
typedef long unsigned int size_t;

int	ft_toupper(int c);
int	ft_tolower(int c);
char	*ft_strrchr(const char *s, int c);
char	*ft_strnstr(const char *big, const char *little, size_t len);
int	ft_strncmp(const char *s1, const char *s2, size_t n);
size_t	ft_strlen(const char *s);
size_t	ft_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
char	*ft_strchr(const char *s, int c);
void	*ft_memset(void *s, int c, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n);
int	ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int	ft_isprint(int c);
int	ft_isdigit(int a);
int	ft_isascii(int a);
int	ft_isalpha(int a);
int	ft_isalnum(int a);
void	ft_bzero(void *s, size_t n);
int	atoi(const char *nptr);


#endif