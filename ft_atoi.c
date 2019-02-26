/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/22 17:54:05 by angkim            #+#    #+#             */
/*   Updated: 2019/02/22 19:04:44 by angkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int num;
	int sign;

	sign = 1;
	while (ft_isalnum(*str + 0) == 0)
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	num = 0;
	while (*str)
	{
		if (ft_isdigit(*str + 0) == 0)
			return (num);
		if (ft_isdigit(*str + 0))
			num = num * 10 + (*str - 48);
		str++;
	}
	return (num * sign);
}
