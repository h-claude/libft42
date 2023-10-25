/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hclaude <hclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 10:55:10 by hclaude           #+#    #+#             */
/*   Updated: 2023/10/25 12:40:26 by hclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void *ft_calloc(size_t nmemb, size_t size)
{
	void		*tab;
	size_t 		i;
	char 		*target;

	tab = malloc(nmemb * size);
	if (tab == NULL)
	{
		return (NULL);
	}
	i = 0;
	target = tab;
	while (i < nmemb * size)
	{
		target[i] = 0;
		i++;
	}
	return (tab);
}
/*
#include <stdio.h>
#include <string.h>

int main(void)
{
	void	*str = ft_calloc(5800,5100);
	void	*str1 = calloc(5800,5100);
	
	printf("ft_calloc : %p\n", str);
	printf("calloc : %p\n", str1);
	
	printf("%d\n", memcmp(str, str1, 2));
	free(str);
	free(str1);
}
*/