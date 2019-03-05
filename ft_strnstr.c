/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/21 09:49:52 by angkim            #+#    #+#             */
/*   Updated: 2019/03/04 09:56:34 by angkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** locate the first occ of NT str needle in NT str haystack
** not more than len characters are searched; chars after \0 not searched
** returns haystack if needle empty, ptr to first occ in haystack, or NULL
*/

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t j;
	size_t k;

	if (!*needle)
		return ((char *)haystack);
	i = 0;
	while (haystack[i])
	{
		j = 0;
		k = i + j;
		while (*(needle + j) == *(haystack + k) && k < len && needle[j])
			j++;
		if (!*(needle + j))
			return ((char *)(&haystack[i]));
		i++;
	}
	return (0);
}
