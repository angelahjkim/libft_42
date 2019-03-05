/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/19 00:48:48 by angkim            #+#    #+#             */
/*   Updated: 2019/02/26 19:38:49 by angkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** write zeroes to a byte string. need to transfer address of void pointer
** parameter to a char (byte) string because void * are unable to access values
** at the address they point to.
*/

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*byte_str;
	unsigned int	i;

	byte_str = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		byte_str[i] = 0;
		i++;
	}
}
