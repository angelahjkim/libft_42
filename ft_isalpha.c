/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/22 18:04:51 by angkim            #+#    #+#             */
/*   Updated: 2019/02/24 21:58:15 by angkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isalpha(int c)
{
	unsigned char uns_c;

	uns_c = (unsigned char)c;
	if (uns_c < 0)
		return (0);
	else if (uns_c >= 'a' && uns_c <= 'z')
		return (1);
	else if (uns_c >= 'A' && uns_c <= 'Z')
		return (1);
	else
		return (0);
}
