/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/23 23:40:29 by angkim            #+#    #+#             */
/*   Updated: 2019/03/04 20:01:47 by angkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** takes str as param and returns an array of strs delimited by char c
** ex: ft_strsplit("*hello****world*", '*') returns array: {"hello", "world"}
*/

static int	word_count(char const *s, char c)
{
	int count;

	count = 0;
	while (s && *s)
	{
		if (*s != c)
		{
			count++;
			while (*s != c)
				s++;
		}
		s++;
	}
	return (count);
}

static char *fill_strarray(char *array, const char *s, int start, int end)
{
	int i;

	i = 0;
	while (start < end)
	{
		array[i] = s[start];
		i++;
		start++;
	}
	array[i] = '\0';
	return (array);
}

static char	**make_strarray(char **array, const char *s, char c)
{
	int i;
	int j;
	int start;
	int end;

	i = 0;
	j = 0;
	while (s[i] && j < word_count(s, c))
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
			array[j] = fill_strarray(array[j], s, start, end);
		j++;
	}
	return (array);
}

static char	**new_array(char **array, char const *s, char c)
{
	int words;

	words = word_count(s, c);
	array = (char **)malloc(sizeof(char *) * words);
	if (array)
		return (array);
	return (0);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**word_arr;

	word_arr = NULL;
	word_arr = new_array(word_arr, s, c);
	if (word_arr && s)
	{
		word_arr = make_strarray(word_arr, s, c);
		return (word_arr);
	}
	return (0);
}
