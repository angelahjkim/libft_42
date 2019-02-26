/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/23 14:57:12 by angkim            #+#    #+#             */
/*   Updated: 2019/02/23 16:07:56 by angkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** takes a string and passes each character to the function f
*/

void	ft_striter(char *s, void (*f)(char *))
{
	int len;

	len = ft_strlen(s) + 1;
	while (len--)
	{
		f(s);
		s++;
	}
}
