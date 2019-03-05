/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/23 16:55:11 by angkim            #+#    #+#             */
/*   Updated: 2019/03/04 22:21:50 by angkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** lexicographical comparison between s1 and s2
** return 1 if the strings are equal, 0 otherwise
*/

int		ft_strequ(char const *s1, char const *s2)
{
	if (s1 && s2)
	{
		if (!ft_strcmp(s1, s2))
			return (1);
		else
			return (0);
	}
	return (0);
}
