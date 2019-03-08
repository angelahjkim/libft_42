/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angela <ankimpiscine@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/07 17:19:51 by angela            #+#    #+#             */
/*   Updated: 2019/03/07 17:52:40 by angela           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Allocates (with malloc(3)) and returns a “fresh” link. The variables content
** and content_size of the new link are initialized by copy of the parameters
** of the function. If the parameter content is nul, the variable content is 
** initialized to NULL and the variable content_size is initialized to 0 even
** if the parameter content_size isn’t. The variable next is initialized to
** NULL. If the allocation fails, the function returns NULL.
*/ 

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *node;

	node = (t_list *)malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	if (!content)
	{
		node->content = NULL;
		node->content_size = 0;
	}
	else
	{
		node->content = (void *)malloc(sizeof(content_size));
		if (!node->content)
		{
			free (node);
			return (NULL);
		}
		{
			ft_memcpy(node->content, content, content_size);
			node->content_size = content_size;
		}
	}
	node->next = NULL;
	return (node);
}
