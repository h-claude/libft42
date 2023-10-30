/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hclaude <hclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 10:53:06 by hclaude           #+#    #+#             */
/*   Updated: 2023/10/30 18:26:40 by hclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, t_size_t len)
{
	t_size_t	i;
	int			ilittle;

	i = 0;
	ilittle = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (i < len && big[i] != '\0' && little[ilittle] != '\0')
	{
		if (big[i] == little[ilittle])
		{
			ilittle++;
		}
		else
			ilittle = 0;
		i++;
	}
	if (little[ilittle] == '\0' && ilittle > 0)
	{
		return ((char *)big + i - ilittle);
	}
	return (NULL);
}

#include <stdio.h>

int main(void)
{
	char haystack[30] = "aaabcabcd";
	char needle[10] = "aabc";
	printf("%s", ft_strnstr(haystack, needle, 1));
}

