/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hclaude <hclaude@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 12:28:12 by hclaude           #+#    #+#             */
/*   Updated: 2023/10/31 13:28:26 by hclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, t_size_t n)
{
	char		*dest;
	t_size_t	i;

	dest = dst;
	i = 0;
	if (src == NULL && dst == NULL)
		return (dest);
	while (i < n)
	{
		dest[i] = *(char *)src;
		src++;
		i++;
	}
	return (dest);
}
