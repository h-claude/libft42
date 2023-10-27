/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hclaude <hclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 15:34:07 by hclaude           #+#    #+#             */
/*   Updated: 2023/10/27 12:47:08 by hclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t		i;
	char		*target;

	i = 0;
	target = s;
	while (i < n)
	{
		target[i] = '\0';
		i++;
	}
}
/*
#include <stdio.h>

int	main(void)
{
	char list[] = "abcd";
	ft_bzero(list+2, 2);
	printf("%s\n", list);
	char list2[] = "abcd";
	bzero(list2+2, 2);
	printf("%s", list2);
}*/