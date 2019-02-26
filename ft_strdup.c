/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/18 23:07:13 by angkim            #+#    #+#             */
/*   Updated: 2019/02/24 22:24:59 by angkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s1_copy;
	int		i;

	s1_copy = (char *)malloc(sizeof(char) * ft_strlen(s1) + 1);
	if (s1_copy)
	{
		i = 0;
		while (s1[i])
		{
			s1_copy[i] = s1[i];
			i++;
		}
		s1_copy[i] = '\0';
	}
	return (s1_copy);
}
