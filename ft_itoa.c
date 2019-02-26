/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/24 18:13:24 by angkim            #+#    #+#             */
/*   Updated: 2019/02/25 22:25:34 by angkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** malloc a 'fresh' string with NT representing the integer n given as arg
** negative numbers must be supported
** if allocation fails, return NULL.			INT_MIN issue..
*/

static int	num_places(int n)
{
	int len;

	len = 0;
	if (n < 0)
	{
		len++;
		n *= -1;
	}
	while (n / 10)
	{
		len++;
		n /= 10;
	}
	return (len + 1);
}

char	*str_rev(char *str, int len)
{
	int		i;
	char	tmp;

	i = 0;
	while (i < len)
	{
		tmp = str[i];
		str[i] = str[len];
		str[len] = tmp;
		i++;
		len--;
	}
	return (str);
}

char	*put_nbr(char *str, int n, int len)
{
	int i;

	i = 0;
	while (i < len)
	{
		if (n % 10 || n == 0)
		{
			str[i] = n % 10 + '0';
			n /= 10;
		}
		i++;
		str[i] = '\0';
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char	*i_str;
	int		len;
	int 	neg;

	len = num_places(n);
	i_str = (char *)malloc(sizeof(char) * len + 1);
	neg = 0;
	if (i_str)
	{
		if (n < 0)
		{
			n *= -1;
			neg = 1;
		}
		i_str = put_nbr(i_str, n, len);
		i_str = str_rev(i_str, len - 1);
		if (neg)
			i_str[0] = '-';
		return (i_str);
	}
	return (NULL);
}
