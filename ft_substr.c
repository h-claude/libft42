/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hclaude <hclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 14:42:38 by hclaude           #+#    #+#             */
/*   Updated: 2023/10/30 16:12:04 by hclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, t_size_t len)
{
	char		*str;
	t_size_t	i;

	i = 0;
	if (start >= ft_strlen(s))
	 	return (NULL);
	str = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
	{
		return (NULL);
	}
	while (s[i] && i < len)
	{
		str[i] = s[start];
		i++;
		start++;
	}
	str[i] = '\0';
	return (str);
}

#include <stdio.h>

int	main(void)
{
	char	str[] = "hola";

	printf("%s\n", ft_substr(str, 0, 18446744073709551615 ));
}
