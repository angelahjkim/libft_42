/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/23 22:52:32 by angkim            #+#    #+#             */
/*   Updated: 2019/02/24 23:50:16 by angkim           ###   ########.fr       */
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

char		*ft_strtrim(char const *s)
{
	char			*str_cpy;
	unsigned int	len;
	unsigned int	i;
	int				j;

	len = ft_strlen(s) - 1;
	while (is_blank(s[len]))
		len -= is_blank(s[len]);
	i = 0;
	while (is_blank(s[i]))
		i++;
	str_cpy = (char *)malloc(sizeof(*str_cpy) * (len + 1 - i) + 1);
	if (str_cpy)
	{
		j = 0;
		while (i < len + 1)
		{
			str_cpy[j] = s[i];
			i++;
			j++;
		}
		str_cpy[j] = '\0';
		return (str_cpy);
	}
	return (NULL);
}
