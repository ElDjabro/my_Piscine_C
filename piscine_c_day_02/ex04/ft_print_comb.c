/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydjabri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/31 15:46:34 by ydjabri           #+#    #+#             */
/*   Updated: 2017/09/04 15:28:07 by ydjabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_loop_comb(char c, char d, char u)
{
	while (c < d)
	{
		while (d < u)
		{
			while (u <= '9')
			{
				ft_putchar(c);
				ft_putchar(d);
				ft_putchar(u);
				if (!(c == '7' && d == '8' && u == '9'))
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				u++;
			}
			d++;
			u = d + 1;
		}
		c++;
		d = c + 1;
		u = d + 1;
	}
}

void	ft_print_comb(void)
{
	char c;
	char d;
	char u;

	c = '0';
	d = c + 1;
	u = d + 1;
	ft_loop_comb(c, d, u);
}
