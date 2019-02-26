/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/23 16:17:38 by angkim            #+#    #+#             */
/*   Updated: 2019/02/23 16:41:12 by angkim           ###   ########.fr       */
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
	char 			*new_str;
	unsigned int	len;
	unsigned int	i;

	len = ft_strlen(s) + 1;
	new_str = (char *)malloc(sizeof(*new_str) * len);
	if (new_str)
	{
		i = 0;
		while (i < len)
		{
			new_str[i] = f(*s);
			i++;
			s++;
		}
	}
	return (new_str);
}
