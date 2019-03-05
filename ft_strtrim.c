/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/23 22:52:32 by angkim            #+#    #+#             */
/*   Updated: 2019/03/04 19:46:46 by angkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** takes a str and returns a copy of the str without any whitespaces in the
** beginning or end of the str. whitepaces: ' ', '\n', '\t'.
** if allocation fails, return NULL.
*/

static int	is_blank(char c)
{
	if (c == ' ' || c == '\n' || c == '\t')
		return (1);
	else
		return (0);
}

static int	find_start(char *s)
{
	size_t i;

	i = 0;
	while (*s && is_blank(s[i]) && i < ft_strlen((const char *)s))
		i++;
	return (i);
}

static int	find_end(char *s)
{
	size_t i;

	i = ft_strlen((const char *)s) - 1;
	while (*s && is_blank(s[i]))
	{
		if (i == 0)
			return (0);
		i--;
	}
	return (i);
}

char		*ft_strtrim(char const *s)
{
	char	*t_str;

	if (s)
	{
		size_t start;
		size_t end;

		start = find_start((char *)s);
		end = find_end((char *)s);
		if (end == 0)
		{
			t_str = ft_strnew(1);
			return (t_str);
		}
		t_str = ft_strsub(s, find_start((char *)s), end - start + 1);
		return (t_str);
	}
	return (0);
}
