/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eldjabro <eldjabro@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/17 20:16:24 by eldjabro          #+#    #+#             */
/*   Updated: 2017/10/17 20:17:10 by eldjabro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

nclude "ft_stock_par.h"
#include <unistd.h>

void				ft_putchar(char c)
{
	write(1, &c, 1);
}

struct s_stock_par	*ft_param_to_tab(int ac, char **av);

void				ft_show_tab(struct s_stock_par *par);

int					main(int ac, char **av)
{
	t_stock_par	*par;

	par = ft_param_to_tab(ac, av);
	ft_show_tab(par);
}
