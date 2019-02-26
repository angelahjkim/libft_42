/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/23 16:41:34 by angkim            #+#    #+#             */
/*   Updated: 2019/02/23 16:52:51 by angkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** takes a str and a function ptr as args. creates a 'fresh' string (malloc)
** resulting from the successive application of f to str. returns new str.
** assuming NUL char inclusive.
*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*new_str;
	unsigned int	len;
	unsigned int 	i;

	len = ft_strlen(s) + 1;
	new_str = (char *)malloc(sizeof(*new_str) * len);
	if (new_str)
	{
		i = 0;
		while (i < len)
		{
			new_str[i] = f(i, *s);
			i++;
			s++;
		}
	}
	return (new_str);
}
