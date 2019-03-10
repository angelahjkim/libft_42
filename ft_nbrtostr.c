/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtonum.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/08 16:15:57 by angkim            #+#    #+#             */
/*   Updated: 2019/03/08 16:19:38 by angkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Takes a number and returns a string containing the ascii values for each
** digit of the number.
*/

char	*ft_nbrtostr(char *s, int n, int len)
{
	int i;

	i = 0;
	if (n == 0)
		return ("0");
	while (i < len)
	{
		if (n % 10 == 0 && n != 0)
			s[i] = '0';
		if (n % 10)
			s[i] = n % 10 + '0';
		n /= 10;
		i++;
		s[i] = '\0';
	}
	return (s);
}
