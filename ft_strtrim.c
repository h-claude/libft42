/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hclaude <hclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 15:50:10 by hclaude           #+#    #+#             */
/*   Updated: 2023/10/31 19:46:30 by hclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	ishere(char c, char const *s2)
{
	t_size_t	i;

	i = 0;
	while (s2[i] != '\0')
	{
		if (c == s2[i])
			return (1);
		i++;
	}
	return (0);
}


char *ft_strtrim(char const *s1, char const *set)
{
	t_size_t 	len;
	t_size_t	i;
	t_size_t	c;
	char 		*str;

	len = ft_strlen(s1);
	while (ishere(s1[c], set))
	{
		c++;
	}
	while(ishere(s1[len], set) && len)
	{
		len--;
		c++;
	}
	str = ft_calloc(sizeof(char), ft_strlen(s1) - c);
	while (s1[])
	
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	str[] = "   \t  \n\n \t\t  \n\n\nHello \t  Please\n ";
// 	char	s1[] = " \n\t";

// 	printf("%s", ft_strtrim(str, s1));
// }
