/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/20 18:54:33 by angkim            #+#    #+#             */
/*   Updated: 2019/02/22 20:33:16 by angkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** https://svnweb.freebsd.org/base/stable/7/lib/libc/string/strlcat.c?revision
**	=172506&view=markup
** https://www.sudo.ws/todd/papers/strlcpy.html
*/

size_t		ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	char	*d;
	char	*s;
	size_t	rem_size;
	size_t	dlen;

	d = (char *)dst;
	s = (char *)src;
	rem_size = dstsize;
	while (rem_size-- != 0 && *d != '\0')
		d++;
	dlen = d - dst;
	rem_size = dstsize - dlen;
	if (rem_size == 0)
		return (dlen + ft_strlen(s));
	while (*s != '\0')
	{
		if (rem_size-- != 1)
		{
			*d = *s;
			d++;
		}
		s++;
	}
	*d = '\0';
	return (dlen + (s - src));
}
