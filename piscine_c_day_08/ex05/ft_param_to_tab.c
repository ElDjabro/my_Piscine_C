/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eldjabro <eldjabro@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/17 15:39:07 by eldjabro          #+#    #+#             */
/*   Updated: 2017/10/17 16:56:22 by eldjabro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

#include <stdlib.h>
#include <stdio.h>

int					ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char				*ft_strdup(char *src)
{
	char	*dup;
	int		size;
	int		i;

	i = 0;
	size = 0;
	while (src[size] != '\0')
		size++;
	dup = (char*)malloc(sizeof(*dup) * (size + 1));
	while (src[i] != '\0')
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

struct s_stock_par *ft_params_to_tab(int ac, char **av)
{
	int i;
	t_stock_par *tab_params;
	tab_params = (t_stock_par*)malloc(sizeof(t_stock_par) * (ac + 2));

	i = 0;
	while (i < ac)
	{
		tab_params[i].size_param = ft_strlen(av[i]);
		tab_params[i].str = av[i];
		tab_params[i].copy = ft_strdup(av[i]);
		tab_params[i].tab = ft_split_whitespaces(av[i]);
		i++;
	}
	tab_param[i].str = 0;
	return (tab_params);
}
