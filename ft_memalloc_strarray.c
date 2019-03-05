/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_make_strarray.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/04 16:55:22 by angkim            #+#    #+#             */
/*   Updated: 2019/03/04 20:00:03 by angkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** takes and allocates memory to an array of strings from the length of words
** from a string taken as argument; returns string array with allocated memory.
** word is defined as a set of characters delimited by the character taken as 
** argument.
*/

char	**ft_memalloc_strarray(char **array, const char *s, char c)
{
	int i;
	int j;
	int start;
	int end;

	i = 0;
	j = 0;
	while (s[i] && j < ft_wordcount(s, c))
	{
		while (s[i] == c)
			i++;
		if (s[i] != c)
		{
			start = i;
			end = i;
		}
		while (s[i] != c && s[i])
		{
			i++;
			end++;
		}
		array[j] = (char *)malloc(sizeof(char) * (end - start) + 1);
		if (array[j])
			array[j] = ft_strfill(array[j], s, start, end);
		j++;
	}
	return (array);
}
