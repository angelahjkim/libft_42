/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/23 14:51:55 by angkim            #+#    #+#             */
/*   Updated: 2019/02/23 14:56:58 by angkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** takes a str as param and sets value of each character to '\0'
*/

void	ft_strclr(char *s)
{
	int len;

	len = ft_strlen(s);
	while (len--)
	{
		*s = '\0';
		s++;
	}
}
