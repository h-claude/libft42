/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hclaude <hclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 12:28:12 by hclaude           #+#    #+#             */
/*   Updated: 2023/10/30 13:41:06 by hclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, t_size_t n)
{
	char		*dest2;
	t_size_t	i;

	dest2 = dest;
	i = 0;
	while (i < n)
	{
		dest2[i] = *(char *)src;
		src++;
		i++;
	}
	return (dest);
}
