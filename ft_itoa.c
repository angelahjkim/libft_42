/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angkim <angkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/24 18:13:24 by angkim            #+#    #+#             */
/*   Updated: 2019/03/16 07:58:01 by angkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Allocate (with malloc(3)) and returns a “fresh” string ending with ’\0’
** representing the integer n given as argument. Negative numbers must be
** supported. If the allocation fails, the function returns NULL.
*/

char		*ft_itoa(int n)
{
	char	*i_str;
	long	num;
	int		len;
	int		neg;

	num = n;
	if (num < -2147483648 || n > 2147483647)
		return (NULL);
	len = ft_digitcount(num);
	if (!(i_str = (char *)ft_memalloc(len + 1)))
		return (NULL);
	neg = 0;
	if (n < 0)
	{
		num *= -1;
		neg = 1;
	}
	ft_nbrtostr(i_str, num, len);
	ft_strrev(i_str, len);
	if (neg)
		i_str[0] = '-';
	return (i_str);
}
