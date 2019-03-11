/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angkim <angkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/24 18:13:24 by angkim            #+#    #+#             */
/*   Updated: 2019/03/11 11:41:07 by angkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Allocate (with malloc(3)) and returns a “fresh” string ending with ’\0’
** representing the integer n given as argument. Negative numbers must be
** supported. If the allocation fails, the function returns NULL.
*/

static char	*ft_itoa_min(int n, int len)
{
	char	*ret;

	ret = (char *)malloc(sizeof(char) * len + 1);
	if (ret)
	{
		n = 2147483647;
		ret = ft_nbrtostr(ret, n, len);
		ret = ft_strrev(ret, len - 1);
		ret[0] = '-';
		ret[len - 1] = '8';
		return (ret);
	}
	return (0);
}

char		*ft_itoa(int n)
{
	char	*i_str;
	int		len;
	int		neg;

	len = ft_digitcount(n);
	if (n == -2147483648)
		return (ft_itoa_min(n, len));
	i_str = (char *)malloc(len + 1);
	if (!i_str)
		return (NULL);
	neg = 0;
	if (n < 0)
	{
		n *= -1;
		neg = 1;
	}
	i_str = ft_nbrtostr(i_str, n, len);
	i_str = ft_strrev(i_str, len - 1);
	if (neg)
		i_str[0] = '-';
	return (i_str);
}
