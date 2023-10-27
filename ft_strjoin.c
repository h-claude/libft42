/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hclaude <hclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 15:17:49 by hclaude           #+#    #+#             */
/*   Updated: 2023/10/27 13:25:41 by hclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t		i;
	char		*str;
	int			y;

	i = 0;
	y = 0;
	str = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	while (i < ft_strlen(s1))
	{
		str[y] = s1[i];
		i++;
		y++;
	}
	i = 0;
	while (i < ft_strlen(s2))
	{
		str[y] = s2[i];
		i++;
		y++;
	}
	return (str);
}
/*
#include <stdio.h>

int	main(void)
{
	char str1[] = "Hello ";
	char str2[] = "World";

	printf("%s", ft_strjoin(str1, str2));
}
*/