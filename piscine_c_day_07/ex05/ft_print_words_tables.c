/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_words_tables.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eldjabro <eldjabro@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/17 14:01:14 by eldjabro          #+#    #+#             */
/*   Updated: 2017/10/17 14:04:25 by eldjabro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

void	ft_print_words_tables(char **tab)
{
	int		i;

	i = 0;
	while (tab[i])
	{
		ft_putstr(tab[i]);
		ft_putchar('\n');
		i++;
	}
}
