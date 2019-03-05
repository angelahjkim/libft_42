/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wordcount.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/04 16:52:15 by angkim            #+#    #+#             */
/*   Updated: 2019/03/04 19:54:04 by angkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** function that takes a string and returns the number or words it contains
** word defined as characters delimited by the parameter char c
*/

int		ft_wordcount(char const *s, char c)
{
	int count;

	count = 0;
	while (s && *s)
	{
		if (*s != c)
		{
			count++;
			while (*s != c)
				s++;
		}
		s++;
	}
	return (count);
}
