/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/22 20:25:25 by angkim            #+#    #+#             */
/*   Updated: 2019/03/08 14:57:34 by angkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Allocates (with malloc(3)) and returns a “fresh” memory area.
** The memory allocated is initialized to 0.
** If the allocation fails, the function returns NULL.
*/

void	*ft_memalloc(size_t size)
{
	unsigned char	*mem_area;
	size_t			i;

	if ((unsigned long long)(size - 1))
	{
		mem_area = (void *)malloc(sizeof(*mem_area) * size);
		if (mem_area)
		{
			i = 0;
			while (i < size)
			{
				mem_area[i] = 0;
				i++;
			}
			if (i == size)
				return ((void *)mem_area);
		}
	}
	return (0);
}
