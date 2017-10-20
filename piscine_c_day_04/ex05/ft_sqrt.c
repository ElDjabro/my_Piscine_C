/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydjabri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/05 10:15:28 by ydjabri           #+#    #+#             */
/*   Updated: 2017/09/09 21:33:43 by ydjabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt_root(int nb, int i)
{
	if (nb <= 0 || nb < i * i || i > 46430)
		return (0);
	if (nb == i * i)
		return (i);
	else
		return (ft_sqrt_root(nb, i + 1));
}

int		ft_sqrt(int nb)
{
	return (ft_sqrt_root(nb, 1));
}
