/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/21 21:25:28 by angkim            #+#    #+#             */
/*   Updated: 2019/03/04 10:40:17 by angkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** lexicographically compare not more than n chars in NT strings s1 and s2
** return an integer >, =, <, or 0 depending on diff in values of s1 to s2.
*/

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*c_s1;
	unsigned char	*c_s2;
	size_t			i;

	c_s1 = (unsigned char *)s1;
	c_s2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (c_s1[i] == '\0')
			return (-c_s2[i]);
		else if (c_s2[i] == '\0')
			return (c_s1[i]);
		else if (c_s1[i] != c_s2[i])
			return (c_s1[i] - c_s2[i]);
		else
			i++;
	}
	return (0);
}
