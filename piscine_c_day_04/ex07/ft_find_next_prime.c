/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydjabri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/05 16:29:03 by ydjabri           #+#    #+#             */
/*   Updated: 2017/09/09 21:36:44 by ydjabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_prime(int nb)
{
	int i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i <= nb / 2)
	{
		if (nb % i == 0)
			return (0);
		else
			i++;
	}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	int i;

	if (nb <= 1)
		return (2);
	if (is_prime(nb))
	{
		i = nb + 2;
		while (i < 2 * nb)
		{
			if (is_prime(i))
				return (i);
			i += 2;
		}
	}
	else
	{
		i = nb + 1;
		while (i < 2 * nb)
		{
			if (is_prime(i))
				return (i);
			i += 2;
		}
	}
	return (0);
}
