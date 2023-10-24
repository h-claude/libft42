/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hclaude <hclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 12:59:27 by hclaude           #+#    #+#             */
/*   Updated: 2023/10/24 14:56:49 by hclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int a)
{
	return (ft_isdigit(a) || ft_isalpha(a));
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d", ft_isalnum('5'));
	printf("%d", ft_isalnum('a'));
	printf("%d", ft_isalnum('Z'));
	printf("%d", ft_isalnum('9'));
	printf("%d", ft_isalnum('0'));
	printf("%d", ft_isalnum('z'));
	printf("%d", ft_isalnum('@'));
	printf("%d", ft_isalnum('&'));
}
*/