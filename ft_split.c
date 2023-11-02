/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hclaude <hclaude@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 15:49:25 by hclaude           #+#    #+#             */
/*   Updated: 2023/11/02 04:21:40 by hclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static char	**freetab(char **s)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		free(s[i]);
		i++;
	}
	free(s[i]);
	return (s);
}

static int	countstr(char const *s, char c)
{
	int	i;
	int	nbstr;

	i = 0;
	nbstr = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != c && s[i] != '\0')
			nbstr++;
		while (s[i] != c && s[i] != '\0')
			i++;
	}
	return (nbstr);
}

char	**ft_split(char const *s, char c)
{
	
}
