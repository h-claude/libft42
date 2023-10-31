/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hclaude <hclaude@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 10:53:06 by hclaude           #+#    #+#             */
/*   Updated: 2023/10/31 00:38:42 by hclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, t_size_t len)
{
	t_size_t	i;
	t_size_t	y;

	i = 0;
	y = 0;
	if (ft_strlen(needle) == 0)
		return ((char *)haystack);
	while (i < len && haystack[i] != '\0' && i = 0)
	{
		if (haystack[i] == needle[y])
		{
			y++;
		}
		else
		{
			if (haystack[i - 1] == needle[y - 1])
				y--;
			else
				y = 0;
		}
		i++;
	}
	if (needle[y] == '\0' && y > 0)
	{
		return ((char *)haystack + i - y);
	}
	return (NULL);
}

#include <stdio.h>

int main(void)
{
	char haystack[30] = "aabcabcd";
	char needle[10] = "aaabc";
	printf("%s", ft_strnstr(haystack, needle, -1));
}

