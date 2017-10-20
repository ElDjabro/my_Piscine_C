/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_active_bits.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydjabri <ydjabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/08 16:53:17 by ydjabri           #+#    #+#             */
/*   Updated: 2017/09/08 17:04:50 by ydjabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_active_bits(int value)
{
	unsigned int	active;
	long			l_val;

	active = 0;
	l_val = (long)value;
	if (l_val < 0)
	{
		active++;
		l_val *= -1;
	}
	while (l_val != 0)
	{
		if (l_val % 2 == 1)
			active++;
		l_val /= 2;
	}
	return (active);
}
