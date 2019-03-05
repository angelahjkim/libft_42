/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/24 18:13:24 by angkim            #+#    #+#             */
/*   Updated: 2019/03/04 21:32:08 by angkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** malloc a 'fresh' string with NT representing the integer n given as arg
** negative numbers must be supported
** if allocation fails, return NULL.			INT_MIN issue..
*/

static int	ft_countdigits(int n)
{
	int len;

	len = 0;
	if (n == 0)
		return (1);
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

static char	*ft_strrev(char *str, int len)
{
	int		i;
	char	tmp;

	i = 0;
	if (*str == '0' && *(str + 1) == '\0')
		return (str);
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

static char	*ft_putcnbr(char *str, int n, int len)
{
	int i;

	i = 0;
	if (n == 0)
		return ("0");
	while (i < len)
	{
		if (n % 10 == 0 && n != 0)
			str[i] = '0';
		if (n % 10)
			str[i] = n % 10 + '0';
		n /= 10;
		i++;
		str[i] = '\0';
	}
	return (str);
}

static char	*ft_itoa_min(int n)
{
	char	*ret;
	int		len;

	len = ft_countdigits(n);
	ret = (char *)malloc(sizeof(char) * len + 1);
	if (ret)
	{
		n = 2147483647;
		ret = ft_putcnbr(ret, n, len);
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

	if (n == -2147483648)
		return (ft_itoa_min(n));
	len = ft_countdigits(n);
	i_str = (char *)malloc(sizeof(char) * len + 1);
	neg = 0;
	if (i_str)
	{
		if (n < 0)
		{
			n *= -1;
			neg = 1;
		}
		i_str = ft_putcnbr(i_str, n, len);
		i_str = ft_strrev(i_str, len - 1);
		if (neg)
			i_str[0] = '-';
		return (i_str);
	}
	return (0);
}
