/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc_newarray.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/04 17:09:21 by angkim            #+#    #+#             */
/*   Updated: 2019/03/04 19:59:22 by angkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** takes a string array and allocates memory for a pointer to a character
** array for each word in char const *s passed as argument. words are delimited
** by char c passed as argument.
*/

char	**ft_memaalloc_newarray(char **array, char const *s, char c)
{
	int words;

	words = ft_wordcount(s, c);
	array = (char **)malloc(sizeof(char *) * words);
	if (array)
		return (array);
	return (0);
}
