/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/21 10:22:59 by angkim            #+#    #+#             */
/*   Updated: 2019/03/04 10:11:08 by angkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** lexicographically compare the NT strings s1 and s2
** returns an integer greater than, equal to, or less than 0 relative to 
** the value of s1 to s2. comparison is done in UNSIGNED CHARACTERS.
*/

int		ft_strcmp(const char *s1, const char *s2)
{
	unsigned char *c_s1;
	unsigned char *c_s2;

	c_s1 = (unsigned char *)s1;
	c_s2 = (unsigned char *)s2;
	while (*c_s1 && *c_s2)
	{
		if (*c_s1 != *c_s2)
			return (*c_s1 - *c_s2);
		c_s1++;
		c_s2++;
	}
	if (*c_s1 == '\0')
	{
		return (-*c_s2);
	}
	else
		return (*c_s1);
}
