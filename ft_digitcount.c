/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_digitcount.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angkim <angkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/08 16:07:42 by angkim            #+#    #+#             */
/*   Updated: 2019/03/10 15:24:06 by angkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_digitcount(int n)
{
	int count;

	count = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		count++;
		n *= -1;
	}
	while (n / 10)
	{
		count++;
		n /= 10;
	}
	return (count + 1);
}
