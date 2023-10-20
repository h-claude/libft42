/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hclaude <hclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 14:10:06 by hclaude           #+#    #+#             */
/*   Updated: 2023/10/17 14:49:40 by hclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t	ft_strlen(const char *s)
{
	int	i;
	int	c;

	i = 0;
	c = 0;
	while (s[i] != '\0')
	{
		i++;
		c++;
	}
	return (c);
}
/*
#include <string.h>
#include <stdio.h>

int main(void)
{
    printf("%d", ft_strlen("TEST"));
    printf("%d", strlen("TEST"));
}
*/