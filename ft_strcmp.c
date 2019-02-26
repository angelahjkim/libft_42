/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/21 10:22:59 by angkim            #+#    #+#             */
/*   Updated: 2019/02/22 20:35:02 by angkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	char *c_s1;
	char *c_s2;

	c_s1 = (char *)s1;
	c_s2 = (char *)s2;
	while (*c_s1 && *c_s2)
	{
		if (*c_s1 != *c_s2)
			return (*c_s1 - *c_s2);
		c_s1++;
		c_s2++;
	}
	if (*c_s1 == '\0')
		return (-*c_s2);
	else
		return (*c_s1);
}
