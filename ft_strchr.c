/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/21 08:56:17 by angkim            #+#    #+#             */
/*   Updated: 2019/02/21 09:15:23 by angkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char *res_s;

	res_s = NULL;
	while (*s != '\0')
	{
		if (*s == (unsigned char)c)
			return (res_s = (char *)s);
		s++;
	}
	if ((unsigned char)c == '\0')
		return (res_s = (char *)s);
	return (NULL);
}
