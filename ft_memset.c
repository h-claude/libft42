/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hclaude <hclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 14:54:15 by hclaude           #+#    #+#             */
/*   Updated: 2023/10/17 15:34:16 by hclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memset(void *s, int c, size_t n)
{
	int		i;
	char	*target;

	target = s;
	i = 0;
	while (n != 0)
	{
		target[i] = c;
		n--;
		i++;
	}
	return (target);
}
/*
#include <stdio.h>

int	main(void)
{
	char	list[] = "TEST";
	char	list1[] = "TEST";

	ft_memset(list, 90, 1);
	printf("%s\n", list);
	memset(list1, 90, 1);
	printf("%s", list1);
}
*/