/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hclaude <hclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 15:50:10 by hclaude           #+#    #+#             */
/*   Updated: 2023/10/27 15:40:37 by hclaude          ###   ########.fr       */
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
			return (0);
		i++;
	}
	return (1);
}

static int	compteur(char const *s1, char const *set)
{
	t_size_t	i;
	t_size_t	c;

	i = 0;
	c = 0;
	while (s1[i] != '\0')
	{
		if (ishere(s1[i], set))
			c++;
		i++;
	}
	return (c);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	t_size_t	i;
	t_size_t	c;
	char		*str;

	i = 0;
	c = compteur(s1, set);
	str = malloc(sizeof(char) * (c + 1));
	if (str == NULL)
		return (NULL);
	i = 0;
	c = 0;
	while (s1[c] != '\0')
	{
		if (ishere(s1[c], set))
		{
			str[i] = s1[c];
			i++;
		}
		c++;
	}
	str[i++] = '\0';
	return (str);
}

/*

#include <stdio.h>

int	main(void)
{
	char	str[] = "Zidane n10";
	char	s1[] = " iae";

	printf("%s", ft_strtrim(str, s1));
}
*/