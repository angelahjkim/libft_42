/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/21 21:25:28 by angkim            #+#    #+#             */
/*   Updated: 2019/02/24 18:23:58 by angkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	char			*c_s1;
	char			*c_s2;
	unsigned int	i;

	c_s1 = (char *)s1;
	c_s2 = (char *)s2;
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
