/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hclaude <hclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 13:27:21 by hclaude           #+#    #+#             */
/*   Updated: 2023/10/17 14:50:24 by hclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int a)
{
	if (a >= 0 && a <= 127)
	{
		return (1);
	}
	return (0);
}
/*
#include <ctype.h>
#include <limits.h>
#include <stdio.h>

int	main(void)
{
	printf("%d", isascii(0));
	printf("%d", ft_isascii(0));
}
*/