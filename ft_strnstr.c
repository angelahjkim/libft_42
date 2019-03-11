/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angkim <angkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/21 09:49:52 by angkim            #+#    #+#             */
/*   Updated: 2019/03/10 22:48:02 by angkim           ###   ########.fr       */
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

	if (!*needle)
		return ((char *)haystack);
	i = 0;
	while (haystack[i])
	{
		j = 0;
		while (*(needle + j) == *(haystack + i + j) && i + j < len && needle[j])
		{
			j++;
		}
		if (!*(needle + j))
			return ((char *)(haystack + i));
		i++;
	}
	return (NULL);
}
