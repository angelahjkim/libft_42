/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/23 14:41:50 by angkim            #+#    #+#             */
/*   Updated: 2019/02/23 14:51:47 by angkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** takes the address of string as a parameter and frees the memory of the string
** then sets it ptr to NULL
*/

void	ft_strdel(char **as)
{
	if (*as)
	{
		free(*as);
		*as = NULL;
	}
}
