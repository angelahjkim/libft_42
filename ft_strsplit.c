/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/23 23:40:29 by angkim            #+#    #+#             */
/*   Updated: 2019/02/24 21:20:45 by angkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** takes str as param and returns an array of strs delimited by char c
** ex: ft_strsplit("*hello****world*", '*') returns array: {"hello", "world"}
*/

static int	word_count(char const *s, char c)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != c && s[i] != '\0')
			count++;
		while (s[i] != c && s[i] != '\0')
			i++;
	}
	return (count);
}

static char	**fill_strarr(char **str_arr, int pos, char const *s, int st, int e)
{
	int i;

	str_arr[pos] = (char *)malloc(sizeof(char) * (e - st) + 1);
	i = 0;
	while (st < e)
	{
		str_arr[pos][i] = s[st];
		i++;
		st++;
	}
	str_arr[pos][i] = '\0';
	return (str_arr);
}

static char	**new_array(char **array, char const *s, char c)
{
	int word_cnt;

	word_cnt = word_count(s, c);
	array = (char **)malloc(sizeof(char *) * word_cnt);
	return (array);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**word_arr;
	int		start;
	int		end;
	int		i;
	int		j;

	word_arr = NULL;
	word_arr = new_array(word_arr, s, c);
	i = 0;
	j = 0;
	while (s[i] && j < word_count(s, c))
	{
		while (s[i] == c)
			i++;
		if (s[i] != c && s[i] != '\0')
		{
			start = i;
			end = i;
		}
		while (s[i] != c && s[i] != '\0')
		{
			i++;
			end++;
		}
		word_arr = fill_strarr(word_arr, j, s, start, end);
		j++;
	}
	return (word_arr);
}
