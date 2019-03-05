/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angkim <angkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/21 09:26:49 by angkim            #+#    #+#             */
/*   Updated: 2019/03/04 22:19:10 by angkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** locates the first occurance of the NT str needle in the NT str haystack
** if needle is empty, haystack returned; if needle not in haystack, NULL ret
** if needle found, pointer to first character of first occ of needle ret
*/

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t i;
	size_t j;

	if (!*needle)
		return ((char *)haystack);
	i = 0;
	while (haystack[i])
	{
		j = 0;
		while (*(needle + j) == *(haystack + j + i) && *(needle + j))
			j++;
		if (!*(needle + j))
			return ((char *)(&haystack[i]));
		i++;
	}
	return (0);
}
