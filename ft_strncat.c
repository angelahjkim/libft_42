/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/19 20:30:43 by angkim            #+#    #+#             */
/*   Updated: 2019/03/03 13:52:22 by angkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** appends no more than n characters of the NT str s2 to
** the end of the NT str s1, adding a NT char.
** s1 must have sufficient space to hold the result. strs should not overlap.
*/

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	unsigned int i;
	unsigned int j;

	if (*s2)
	{
		i = ft_strlen(s1);
		j = 0;
		while (j < n && s2[j])
		{
			s1[i] = s2[j];
			i++;
			j++;
		}
		s1[i] = '\0';
	}
	return (s1);
}
