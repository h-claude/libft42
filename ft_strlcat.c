/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hclaude <hclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 12:42:01 by hclaude           #+#    #+#             */
/*   Updated: 2023/10/24 14:48:05 by hclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	y;
	size_t	l;

	i = 0;
	y = 0;
	l = 0;
	while (dst[y] != '\0')
	{
		y++;
		l++;
	}
	while (src[i] != '\0')
	{
		if (y < size - 1)
		{
			dst[y] = src[i];
			y++;
		}
		i++;
	}
	dst[y] = '\0';
	return (l + i);
}
/*
#include <bsd/string.h>
#include <stdio.h>

int	main(void)
{
	char	dst[12] = "Hello ";
	char	src[] = "World !";
	char	dst1[12] = "Hello ";
	char	src1[] = "World !";

	// ft_strlcat(dst, src, 10);
	printf("%ld\n", ft_strlcat(dst, src, 12));
	printf("%s\n", dst);
	printf("%ld\n", strlcat(dst1, src1, 12));
	printf("%s", dst1);
}
*/