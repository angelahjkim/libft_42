/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/23 14:57:12 by angkim            #+#    #+#             */
/*   Updated: 2019/03/04 12:20:19 by angkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** takes a string and passes each character to the function f
*/

void	ft_striter(char *s, void (*f)(char *))
{
	if (f)
		while (s && *s)
			f(s++);
}
