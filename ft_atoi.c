/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/22 17:54:05 by angkim            #+#    #+#             */
/*   Updated: 2019/02/28 19:26:18 by angkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_whitespace(char c)
{
	if (c == ' ' || c == '\t' || c == '\v' || c == '\f' || c == '\r' ||
			c == '\n')
		return (1);
	else
		return (0);
}

int		ft_atoi(const char *str)
{
	unsigned int num;
	unsigned int sign;

	sign = 1;
	while (ft_isalnum(*str + 0) == 0)
	{
		if (*str == '-' && ft_isdigit(*(str + 1)))
		{
			sign = -1;
			str++;
		}
		else if (is_whitespace(*str + 0))
			str++;
		else
			return (0);
	}
	num = 0;
	while (*str)
	{
		while (ft_isdigit(*str + 0))
		{
			num = num * 10 + (*str - 48);
			str++;
		}
		if (ft_isdigit(*str + 0) == 0)
			return (num * sign);
	}
	return (num * sign);
}
