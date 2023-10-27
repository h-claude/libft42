/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hclaude <hclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 12:28:12 by hclaude           #+#    #+#             */
/*   Updated: 2023/10/27 15:40:37 by hclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, t_size_t n)
{
	char		*dest2;
	const char	*src2;
	t_size_t	i;

	dest2 = dst;
	src2 = src;
	i = 0;
	while (i < n)
	{
		dest2[i] = src2[i];
		i++;
	}
	return (dst);
}
/*
#include <stdio.h>

int	main(void)
{
	char	src[] = "Hello World";
	char	src1[] = "Hello World";
	char	dest[] = "Goodbye World";
	char	dest1[] = "Goodbye World";

	ft_memcpy(dest, src, 13);
	printf("%s\n", dest);
	memcpy(dest1, src1, 13);
	printf("%s\n", dest1);
	return (0);
}*/