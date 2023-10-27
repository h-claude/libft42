/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hclaude <hclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 13:02:22 by hclaude           #+#    #+#             */
/*   Updated: 2023/10/27 17:28:07 by hclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, t_size_t n)
{
	char		*dst;
	const char	*source;
	t_size_t	i;

	dst = dest;
	source = src;
	i = 0;
	if (dest < src)
	{
		while (i < n)
		{
			dst[i] = source[i];
			i++;
		}
	}
	else
	{
		while (n != 0)
		{
			dst[n - 1] = source[n - 1];
			n--;
		}
	}
	return (dest);
}
