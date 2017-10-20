/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydjabri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/04 16:33:23 by ydjabri           #+#    #+#             */
/*   Updated: 2017/09/09 21:25:52 by ydjabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int cpt;
	int res;

	cpt = 0;
	res = 1;
	if (nb < 0)
		return (0);
	if (nb == 1)
		return (1);
	while (cpt < nb)
	{
		res *= (nb - cpt);
		cpt++;
	}
	return (res);
}
