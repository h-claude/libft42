/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hclaude <hclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 14:23:24 by hclaude           #+#    #+#             */
/*   Updated: 2023/10/20 14:25:21 by hclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>

int ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		c = c + 32;
	}
	return (c);
}
/*
#include <stdio.h>

int main(void)
{
	char c = 'A';

	printf("%c", ft_tolower(c));
}
*/