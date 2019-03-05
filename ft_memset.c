/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/18 23:49:46 by angkim            #+#    #+#             */
/*   Updated: 2019/02/26 19:56:37 by angkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** fill a buffer with character int c. returns the first argument (void *b).
** cast the memory into unsigned chars.
** you cannot access the buffer with dereferencing (*b_copy) because it is a
** void pointer.
*/

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*b_copy;
	unsigned int	i;

	b_copy = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		b_copy[i] = c;
		i++;
	}
	return (b);
}
