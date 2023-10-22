/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hclaude <hclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 14:47:08 by hclaude           #+#    #+#             */
/*   Updated: 2023/10/22 15:38:54 by hclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*target;
	size_t		i;

	target = s;
	i = 0;
	if (n == 0)
		return ((void *) NULL);
	while (target[i] != '\0' && i != n - 1 && target[i] != c)
	{
		i++;
	}
	if (target[i] == c)
	{
		return ((void *)target);
	}
	return ((void *) NULL);
}
/*
#include <stdio.h>

int	main(void)
{
	char	str[] = "TESTZ";
	size_t	n;
	int		chr;
	char	str1[] = "TESTZ";
	size_t	n1;
	int		chr1;

	n = 8;
	chr = 'Z';
	n1 = 8;
	chr1 = 'Z';
	printf("%p\n", ft_memchr(str, chr, n));
	printf("%p", memchr(str1, chr1, n1));
}
*/