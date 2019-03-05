/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/23 16:17:38 by angkim            #+#    #+#             */
/*   Updated: 2019/03/04 12:01:03 by angkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** takes a str and function ptr as args and applies ptrs function to each
** char of str to create a 'fresh' new string (malloc) with the result of
** the applications of f. returns new string. ASSUMMING NUL char included.
*/

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*new_str;
	size_t	i;

	if (s)
	{
		new_str = (char *)malloc(ft_strlen(s) + 1);
		if (new_str)
		{
			i = 0;
			while (*s)
			{
				new_str[i] = f(*s);
				i++;
				s++;
			}
			new_str[i] = '\0';
			return (new_str);
		}
	}
	return (0);
}
