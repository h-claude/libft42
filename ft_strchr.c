/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hclaude <hclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 14:27:02 by hclaude           #+#    #+#             */
/*   Updated: 2023/10/22 15:37:27 by hclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0' && *s != c)
	{
		s++;
	}
	if (*s == c)
	{
		return ((char *)s);
	}
	return ((char *) NULL);
}
/*
#include <stdio.h>

int	main(void)
{
	char	test[] = "test";
	int		c;
	char	test1[] = "test";
	int		c1;
	char	test2[] = "test";
	int		c2;

	c = 't';
	c1 = 't';
	c2 = 't';
	printf("%s\n", ft_strchr(test, c));
	printf("%s\n", strchr(test1, c1));
	printf("%s", strrchr(test2, c2));
}
*/