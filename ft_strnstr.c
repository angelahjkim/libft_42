/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/21 09:49:52 by angkim            #+#    #+#             */
/*   Updated: 2019/02/21 10:19:31 by angkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char			*res;
	unsigned int	i;
	unsigned int	j;

	if (*needle == '\0')
		return (res = (char *)haystack);
	i = 0;
	j = 0;
	if (needle[j] == haystack[i] && j < len)
	{
		res = (char *)haystack;
		while (needle[j] == haystack[i])
		{
			i++;
			j++;
		}
		if (needle[j] == '\0')
			return (res);
	}
	return (NULL);
}
