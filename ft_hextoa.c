/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hextoa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angkim <angkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/07 20:28:42 by angkim            #+#    #+#             */
/*   Updated: 2019/08/07 21:38:00 by angkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>

char	*ft_hextoa(int nbr, int pos)
{
	char	*hex_str = (char *)ft_memalloc(sizeof(char) * 5);
	char	*tmp = NULL;
	char	hex_digits[] = "0123456789abcdef";

	if (nbr >= 16)
		ft_hextoa(nbr / 16, ++pos);
	tmp[pos] = hex_digits[nbr % 16];

printf("tmp: %s\n", tmp);

	return (hex_str);
}

// for testing

#include <stdio.h>
#include <limits.h>

int     main(void)
{
    int num = 123;

    printf("%s\n", ft_hextoa(num, 0));
    return (0);
}