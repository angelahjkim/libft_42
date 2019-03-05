/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/26 23:24:35 by angkim            #+#    #+#             */
/*   Updated: 2019/02/28 19:14:14 by angkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** copies len bytes from string src to dst. The two strings may overlap;
** the copy is always done in a non-destructive manner.
** accounting for overlap: if src addr is lower than dst addr, copy from end
** if src addr is higher, copy forwards.
*/

void	*ft_memmove(void *dst, void const *src, size_t len)
{
	unsigned char	*csrc;
	unsigned char	*cdst;
	size_t			i;

	csrc = (unsigned char *)src;
	cdst = (unsigned char *)dst;
	i = 0;
	if (csrc < cdst)
	{
		while (++i <= len)
			cdst[len - i] = csrc[len - i];
	}
	else
	{
		while (len-- > 0)
			*(cdst++) = *(csrc++);
	}
	return (dst);
}
