/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/22 22:56:39 by angkim            #+#    #+#             */
/*   Updated: 2019/02/23 13:46:41 by angkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** takes as a param the address of a mem area that needs to be freed with free
** then puts the ptr to NULL
*/

void	ft_memdel(void **ap)
{
	if (*ap)
	{
		free(*ap);
		*ap = 0;
	}
}
