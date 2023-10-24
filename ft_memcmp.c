/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hclaude <hclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 09:43:19 by hclaude           #+#    #+#             */
/*   Updated: 2023/10/24 14:50:06 by hclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t		i;
	const char	*target1;
	const char	*target2;

	i = 0;
	target1 = s1;
	target2 = s2;
	if (n == 0)
	{
		return (0);
	}
	while ((target1[i] != '\0' && target2[i] != '\0') && i + 1 < n
		&& target1[i] == target2[i])
	{
		i++;
	}
	return (target1[i] - target2[i]);
}
/*
#include <stdio.h>

int	main(void)
{
	char	str1[] = "test ";
	char	str2[] = "";
	char	str3[] = "test ";
	char	str4[] = "";

	printf("%d\n", memcmp(str1, str2, 10));
	printf("%d", ft_memcmp(str3, str4, 10));
}
*/