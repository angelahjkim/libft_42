/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/21 09:15:39 by angkim            #+#    #+#             */
/*   Updated: 2019/02/21 09:25:21 by angkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*res;
	int		i;

	i = 0;
	while (*s != '\0')
	{
		s++;
		i++;
	}
	if (*s == (unsigned char)c)
		return (res = (char *)s);
	s--;
	i--;
	while (i--)
	{
		if (*s == (unsigned char)c)
			return (res = (char *)s);
		s--;
	}
	return (NULL);
}
