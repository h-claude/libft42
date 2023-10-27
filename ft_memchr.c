/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hclaude <hclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 14:47:08 by hclaude           #+#    #+#             */
/*   Updated: 2023/10/27 18:33:51 by hclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, t_size_t n)
{
	const char	*target;
	t_size_t	i;

	target = s;
	i = 0;
	while (target[i] != '\0' && i <= n - 1 && target[i] != c)
	{
		i++;
	}
	if (target[i] == c)
	{
		return ((void *)target);
	}
	return ((void *) NULL);
}
