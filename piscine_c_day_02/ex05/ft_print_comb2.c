/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydjabri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/02 11:14:48 by ydjabri           #+#    #+#             */
/*   Updated: 2017/09/04 15:26:06 by ydjabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_print_number(int nb)
{
	int n1;
	int n2;

	n1 = nb / 10;
	n2 = nb % 10;
	ft_putchar(n1 + 48);
	ft_putchar(n2 + 48);
}

void	ft_print_comb2(void)
{
	int num1;
	int num2;

	num1 = 0;
	num2 = 1;
	while (num1 <= 98)
	{
		num2 = num1 + 1;
		while (num2 <= 99)
		{
			ft_print_number(num1);
			ft_putchar(' ');
			ft_print_number(num2);
			if (!(num1 == 98 && num2 == 99))
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			num2++;
		}
		num1++;
	}
}
