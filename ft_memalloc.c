/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/22 20:25:25 by angkim            #+#    #+#             */
/*   Updated: 2019/02/22 22:49:51 by angkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** allocates and returns a 'fresh' memory area initialized to 0
** if allocation fails, return NULL
*/

void	*ft_memalloc(size_t size)
{
	unsigned char	*mem_area;
	unsigned int	i;

	mem_area = (void *)malloc(sizeof(*mem_area) * size);
	i = 0;
	while (i < size)
	{
		mem_area[i] = 0;
		i++;
	}
	if (mem_area)
		return ((void *)mem_area);
	return (0);
}
