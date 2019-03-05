/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/22 20:25:25 by angkim            #+#    #+#             */
/*   Updated: 2019/03/04 11:25:24 by angkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** allocates and returns a 'fresh' memory area initialized to 0
** if allocation fails, return NULL. size_t is the maximum size that can be
** allocated by malloc, sizeof(size_t) will return 0 to that max.
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
