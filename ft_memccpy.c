/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/20 12:05:38 by angkim            #+#    #+#             */
/*   Updated: 2019/02/24 22:12:32 by angkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** if the character c occurs in src, copy stops, pointer to the
** byte after the copy of c in the string dst is returned
*/

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*cdst;
	unsigned char	*csrc;

	cdst = (unsigned char *)dst;
	csrc = (unsigned char *)src;
	while (n--)
	{
		*cdst = *csrc;
		if (*cdst == (unsigned char)c)
		{
			cdst++;
			return (cdst);
		}
		cdst++;
		csrc++;
	}
	return (0);
}
