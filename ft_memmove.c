/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/20 13:31:16 by angkim            #+#    #+#             */
/*   Updated: 2019/02/26 15:35:27 by angkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** copy byte string. take care of memory overlapping.
*/

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char			*csrc;
	char			*cdst;
	void			*tmp;
	char			*ctmp;
	unsigned int	i;
	
	csrc = (char *)src;
	cdst = (char *)dst;
	tmp = NULL;
	tmp = ft_memset(tmp, 0, len);
	ctmp = (char *)tmp;
	i = 0;
	while (i < len)
	{
		ctmp[i] = csrc[i];
		i++;
	}
	i = 0;
	while (i < len)
	{
		cdst[i] = ctmp[i];
		i++;
	}
	return (dst);
}
