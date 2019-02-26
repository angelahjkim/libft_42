/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/23 13:46:49 by angkim            #+#    #+#             */
/*   Updated: 2019/02/23 15:39:16 by angkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** allocates a 'fresh' string of size characters intialized and ending with '\0
** returns the new string
** if allocation fails, return NULL
*/

char	*ft_strnew(size_t size)
{
	char			*str_new;
	unsigned int	i;

	str_new = (char *)malloc(sizeof(char) * size);
	i = 0;
	while (i < size)
	{
		str_new[i] = '\0';
		i++;
	}
	if (str_new)
		return (str_new);
	else
		return (NULL);
}
