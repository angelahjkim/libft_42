/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/23 21:42:36 by angkim            #+#    #+#             */
/*   Updated: 2019/02/23 22:52:22 by angkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** takes s1 and s2 as args and concatenates s2 to s1 into a 'fresh' str
** returns new string. if allocation fails, return NULL.
*/

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*cat_str;
	unsigned int	s1_len;
	unsigned int	s2_len;
	unsigned int	total_len;
	unsigned int	i;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	total_len = s1_len + s2_len + 1;
	cat_str = (char *)malloc(sizeof(*cat_str) * total_len);
	if (cat_str)
	{
		i = 0;
		while (i < s1_len)
		{
			cat_str[i] = s1[i];
			i++;
		}
		i = 0;
		while (i < s2_len && s1_len < total_len)
		{
			cat_str[s1_len] = s2[i];
			s1_len++;
			i++;
		}
		cat_str[s1_len] = '\0';
		return (cat_str);
	}
	else
		return (NULL);
}
