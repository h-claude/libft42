/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hclaude <hclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 14:14:43 by hclaude           #+#    #+#             */
/*   Updated: 2023/10/20 14:22:52 by hclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>

int ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		c = c - 32;
	}
	return (c);
}
/*
#include <stdio.h>

int main(void)
{
	char c = 'a';

	printf("%c", ft_toupper(c));
}
*/