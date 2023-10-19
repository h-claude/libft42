/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hclaude <hclaude@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 13:47:30 by hclaude           #+#    #+#             */
/*   Updated: 2023/10/19 17:58:29 by hclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t	ft_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = 0;
	while (src[i] != '\0' && i < dstsize - 1 && dstsize != 0)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	while (src[len] != '\0')
		len++;
	return (len);
}
/*
#include <libc.h>
#include <stdio.h>

int	main(void)
{
	char	src[] = "Hello World";
	char	dst[9];
	char	src2[] = "Hello World";
	char	dst2[9];

	// ft_strlcpy(dst, src, 5);
	printf("%lu\n", ft_strlcpy(dst, src, 10));
	printf("%s\n", dst);
	printf("%lu\n", strlcpy(dst2, src2, 9));
	printf("%s\n", dst2);
}
*/