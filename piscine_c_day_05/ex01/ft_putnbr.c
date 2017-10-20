/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydjabri <ydjabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/06 15:35:18 by ydjabri           #+#    #+#             */
/*   Updated: 2017/09/06 17:35:22 by ydjabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

int		length_number(int nb)
{
	int l;

	l = 0;
	if (nb < 0)
		nb = -1 * nb;
	while (nb != 0)
	{
		l++;
		nb /= 10;
	}
	return (l);
}

int		positive_pow(int nb, int p)
{
	int res;
	int	m;

	res = 1;
	m = 1;
	while (m <= p)
	{
		res *= nb;
		m++;
	}
	return (res);
}

void	ft_putnbr(int nb)
{
	int len;
	int tmp;

	if (nb == 0)
		ft_putchar('0');
	if (nb == (-2147483648))
	{
		ft_putchar('-');
		ft_putchar('2');
		nb = 147483648;
	}
	len = length_number(nb);
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -1 * nb;
	}
	tmp = nb;
	while (len >= 1)
	{
		tmp /= positive_pow(10, len - 1);
		ft_putchar(tmp + 48);
		tmp = nb % positive_pow(10, len - 1);
		len--;
	}
}
