/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hclaude <hclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 13:02:22 by hclaude           #+#    #+#             */
/*   Updated: 2023/10/27 17:21:47 by hclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, t_size_t n)
{
	char		*dst;
	const char	*source;
	t_size_t	i;

	dst = dest;
	source = src;
	i = 0;
	if (dest < src)
	{
		while (i < n)
		{
			dst[i] = source[i];
			i++;
		}
	}
	else
	{
		while (n != 0)
		{
			dst[n - 1] = source[n - 1];
			n--;
		}
	}
	return (dest);
}

// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
// 	char dest2[] = "Hello World";
// 	//char src2[] = "Goodbye World";
// 	char dest3[] = "Hello World";
// 	//char src3[] = "Goodbye World";

// 	ft_memmove(dest2, dest2, 1);
// 	memmove(dest3, dest3, 1);
// 	printf("ft_memmove : %s\n", dest2);
// 	printf("memmove : %s\n", dest3);
// }