/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eldjabro <eldjabro@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/09 13:37:52 by eldjabro          #+#    #+#             */
/*   Updated: 2017/10/10 09:15:51 by eldjabro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
	ft_putchar('\n');
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void	ft_sort_params(int ac, char **av)
{
	int 	i;
	int 	sorted;
	char 	*tab;

	sorted = 0;
	while (!sorted)
	{
		i = 0;
		sorted = 1;
		while (i < ac - 1)
		{
			if (ft_strcmp(av[i], av[i + 1]) > 0)
			{
				sorted = 0;
				tab = av[i + 1];
				av[i + 1] = av[i];
				av[i] = tab;
			}
			i++;
		}
	}
}

int		main(int argc, char **argv)
{
	int	i;

	i = 1;
	ft_sort_params(argc - 1, argv + 1);
	while (i < argc)
		ft_putstr(argv[i++]);
	return (0);
}
