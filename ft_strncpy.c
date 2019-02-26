/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/19 18:00:10 by angkim            #+#    #+#             */
/*   Updated: 2019/02/19 18:23:32 by angkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	j = 0;
	while (i < len && src[i])
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	if (src[i] == '\0')
	{
		while (j < len)
		{
			dst[j] = '\0';
			j++;
		}
	}
	return (dst);
}
