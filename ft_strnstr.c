/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hclaude <hclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 10:53:06 by hclaude           #+#    #+#             */
/*   Updated: 2023/10/24 12:00:38 by hclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	int		ilittle;

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
/*
#include <stdio.h>

int	main(void)
{
	char str[] = "Hello World";
	char str1[] = "Word    ";

	printf("%s", ft_strnstr(str, str1, 0));
}
*/