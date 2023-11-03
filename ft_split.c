/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hclaude <hclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 15:49:25 by hclaude           #+#    #+#             */
/*   Updated: 2023/11/03 16:29:48 by hclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

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

static void	freetab(char **str, int len)
{
	int	i;

	i = 0;
	while (i <= len)
	{
		free(str[i]);
		i++;
	}
}

static char	**sub(const char *s, char c, char **str)
{
	size_t	i;
	size_t	itemp;
	int		y;
	int		len;

	i = 0;
	itemp = 0;
	y = 0;
	len = countstr(s, c);
	while (y < len)
	{
		while (s[i] == c && s[i])
			i++;
		itemp = i;
		while (s[i] != c && s[i])
			i++;
		str[y] = ft_substr(s, itemp, i - itemp);
		y++;
	}
	str[y] = NULL;
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**str;

	if (!s)
		return (NULL);
	str = (char **)ft_calloc(countstr(s, c) + 1, sizeof(char *));
	if (!str)
		return (NULL);
	if (!sub(s, c, str))
	{
		freetab(str, countstr(s, c));
		return (NULL);
	}
	return (str);
}
