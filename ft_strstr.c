/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/21 09:26:49 by angkim            #+#    #+#             */
/*   Updated: 2019/02/21 10:22:09 by angkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	char	*res;
	int		i;
	int		j;

	if (*needle == '\0')
		return (res = (char *)haystack);
	i = 0;
	j = 0;
	while (haystack[i])
	{
		if (needle[j] == haystack[i])
		{
			res = (char *)needle;
			while (needle[i] == haystack[j])
			{
				i++;
				j++;
			}
			if (needle[i] == '\0')
				return (res);
		}
		i++;
	}
	return (NULL);
}
