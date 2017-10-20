/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_collatz_conjecture.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydjabri <ydjabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/08 14:33:40 by ydjabri           #+#    #+#             */
/*   Updated: 2017/09/08 14:46:41 by ydjabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void			collatz_conj(unsigned int base, unsigned int *time_f)
{
	(*time_f)++;
	if (base > 1431655764 && base % 2 == 1)
	{
		*time_f = 0;
		return ;
	}
	if (base == 1)
		return ;
	if (base % 2 == 0)
		collatz_conj(base / 2, time_f);
	else
		collatz_conj(3 * base + 1, time_f);
}

unsigned int	ft_collatz_conjecture(unsigned int base)
{
	unsigned int time_f;

	time_f = 0;
	collatz_conj(base, &time_f);
	return (time_f - 1);
}
