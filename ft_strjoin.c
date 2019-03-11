/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angkim <angkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/23 21:42:36 by angkim            #+#    #+#             */
/*   Updated: 2019/03/10 15:33:06 by angkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Allocates (with malloc(3)) and returns a “fresh” string ending with ’\0’,
** result of the concatenation of s1 and s2. If the allocation fails the
** function returns NULL.
*/

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*cat_str;
	unsigned int	total_len;
	unsigned int	i;
	unsigned int	j;

	if (s1 && s2)
	{
		total_len = ft_strlen(s1) + ft_strlen(s2);
		cat_str = (char *)malloc(sizeof(*cat_str) * total_len + 1);
		if (cat_str)
		{
			i = 0;
			while (i < ft_strlen(s1))
			{
				cat_str[i] = s1[i];
				i++;
			}
			i = 0;
			j = ft_strlen(s1);
			while (i < ft_strlen(s2) && j < total_len)
			{
				cat_str[j] = s2[i];
				j++;
				i++;
			}
			cat_str[j] = '\0';
			return (cat_str);
		}
	}
	return (NULL);
}
