/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hclaude <hclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 14:27:02 by hclaude           #+#    #+#             */
/*   Updated: 2023/10/22 15:37:09 by hclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	while (*s != '\0')
	{
		s++;
	}
	while (*s != c)
	{
		s--;
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
	char	test[] = "Hello World";
	int		c;
	char	test1[] = "Hello World";
	int		c1;
	char	test2[] = "Hello World";
	int		c2;

	c = 'r';
	c1 = 'r';
	c2 = 'r';
	printf("%s\n", ft_strrchr(test, c));
	printf("%s\n", strchr(test1, c1));
	printf("%s", strrchr(test2, c2));
}
*/