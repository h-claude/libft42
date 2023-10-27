/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hclaude <hclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 10:55:10 by hclaude           #+#    #+#             */
/*   Updated: 2023/10/27 15:40:37 by hclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(t_size_t nmemb, t_size_t size)
{
	void		*tab;
	t_size_t	i;
	char		*target;

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
