/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/23 15:46:13 by angkim            #+#    #+#             */
/*   Updated: 2019/02/23 16:17:31 by angkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** takes a string and function pointer as args and passes the index of the str
** and each character by address to the function
** ASSUMING each character includes NUL character
*/

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int len;
	unsigned int i;

	len = ft_strlen(s);
	i = 0;
	while (i < len + 1)
	{
		f(i, s);
		s++;
		i++;
	}
}
