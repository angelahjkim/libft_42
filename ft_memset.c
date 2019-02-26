/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/18 23:49:46 by angkim            #+#    #+#             */
/*   Updated: 2019/02/22 22:18:59 by angkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*byte_val;
	unsigned int	i;

	byte_val = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		byte_val[i] = c;
		i++;
	}
	return (b);
}
