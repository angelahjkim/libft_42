/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/23 17:31:18 by angkim            #+#    #+#             */
/*   Updated: 2019/02/23 21:42:30 by angkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** takes a string, a start index, and a substring length as args
** returns substring in a 'fresh' string (malloc)
** if allocation fails, return NULL
*/

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char 			*sub_str;
	unsigned int	i;

	sub_str = (char *)malloc(sizeof(*sub_str) * len + 1);
	if (sub_str)
	{
		i = 0;
		while (i < len)
		{
			sub_str[i] = s[start];
			i++;
			start++;
		}
		sub_str[i] = '\0';
	}
	else
		return (NULL);
	return (sub_str);
}
