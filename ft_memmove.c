/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hclaude <hclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 13:02:22 by hclaude           #+#    #+#             */
/*   Updated: 2023/10/20 13:00:38 by hclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*dest;
	const char	*source;
	size_t		i;

	dest = dst;
	source = src;
	i = len;
	if (source == dest)
		return (dst);
	if (dest < source || dest >= source + i)
	{
		while (i--)
			dest[i - 1] = source[i - 1];
	}
	else
	{
		while (i--)
			dest[len - i] = source[len - i];
	}
	return (dst);
}

// #include <stdio.h>

// int main(void)
// {
// 	char dest2[] = "Hello World";
// 	char src2[] = "Goodbye World";
// 	char dest3[] = "Hello World";
// 	char src3[] = "Goodbye World";

// 	ft_memmove(dest2, src2, 5);
// 	memmove(dest3, src3, 5);
// 	printf("ft_memmove : %s\n", dest2);
// 	printf("memmove : %s\n", dest3);
// }