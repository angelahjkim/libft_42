/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/21 09:15:39 by angkim            #+#    #+#             */
/*   Updated: 2019/03/03 14:28:13 by angkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** locate last occurence of c in the string
** return pointer to located character, or NULL if character is not in string
*/

#include <stdio.h>		// delete

char	*ft_strrchr(const char *s, int c)
{
	int		len;

	len = ft_strlen(s) - 1;
	if ((unsigned char)c == '\0')
		len = ft_strlen(s);
	while (len >= 0)
	{
		if (*(s + len) == (unsigned char)c)
			return ((char *)s + len);
		len--;
	}
	return (NULL);
}
