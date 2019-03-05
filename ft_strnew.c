/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/23 13:46:49 by angkim            #+#    #+#             */
/*   Updated: 2019/03/04 11:31:51 by angkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** allocates a 'fresh' string of size characters intialized and ending with \0
** returns the new string
** if allocation fails, return NULL
*/

char	*ft_strnew(size_t size)
{
	char	*str_new;
	size_t	i;

	str_new = (char *)malloc(sizeof(char) * size + 1);
	if (str_new)
	{
		i = 0;
		while (i < size + 1)
		{
			str_new[i] = '\0';
			i++;
		}
		return (str_new);
	}
	return (0);
}
