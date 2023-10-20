/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hclaude <hclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 14:27:02 by hclaude           #+#    #+#             */
/*   Updated: 2023/10/20 15:24:50 by hclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char *ft_strchr(const char *s, int c)
{
	int 	i;
	char 	*result;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			*result = s[i];
			return (result);
		}
		i++;
	}
	if (s[i] == c)
	{
		return (result);
	}
	return (NULL);
}

#include <stdio.h>

int main(void)
{
	char test[] = "test";
	int c = 't';
	char test1[] = "test";
	int c1 = 't';
	
	printf("%s\n", ft_strchr(test, c));
	printf("%s", strchr(test1, c1));
}