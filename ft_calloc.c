/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hclaude <hclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 10:55:10 by hclaude           #+#    #+#             */
/*   Updated: 2023/10/27 15:01:03 by hclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*tab;
	size_t	i;
	char	*target;

	tab = malloc(nmemb * size);
	if (tab == NULL)
	{
		return (NULL);
	}
	i = 0;
	target = tab;
	while (i < nmemb * size)
	{
		target[i] = 0;
		i++;
	}
	return (tab);
}
