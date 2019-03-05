/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/05 13:59:49 by angkim            #+#    #+#             */
/*   Updated: 2019/03/05 15:33:06 by angkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** allocate a new node of t_list type, initializing values by copy
** of the parameters
** if *content = nul ('\0'), content initalized to NULL
** content_size is initialized to 0, regardless of value passed
*/

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *node;

	node = (t_list *)malloc(sizeof(node));
	if (node)
	{
		if (content == '\0')
		{
			node->content = NULL;
			node->content_size = 0;
		}
		else
		{
			ft_memmove(node->content, content_size, content_size);
			node->content_size = 0;
		}
		node->next = NULL;
		return (node);
	}
	return (0);
}
