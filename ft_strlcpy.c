/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hclaude <hclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 13:47:30 by hclaude           #+#    #+#             */
/*   Updated: 2023/10/27 13:54:20 by hclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
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
#include <stdio.h>

int	main(void)
{
	char	src[] = "Hello World";
	char	dst[9];
	char	src2[] = "Hello World";
	char	dst2[9];

	// ft_strlcpy(dst, src, 5);
	printf("%lu\n", ft_strlcpy(dst, src, 9));
	printf("%s\n", dst);
	printf("%lu\n", strlcpy(dst2, src2, 9));
	printf("%s\n", dst2);
}
*/