/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydjabri <ydjabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/08 12:19:17 by ydjabri           #+#    #+#             */
/*   Updated: 2017/09/08 14:31:31 by ydjabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		compare_str(char *str1, char *str2)
{
	int i;

	i = 0;
	while (str1[i] || str2[i])
	{
		if (str1[i] != str2[i] && str1[i] + 32 != str2[i])
			return (-1);
		i++;
	}
	return (1);
}

void	ft_spy(char *str)
{
	int cpt;

	cpt = 0;
	while ((str[cpt] == 9) || (str[cpt] == 32))
		cpt++;
	if ((compare_str(str, "president") == 1)
			|| (compare_str(str, "bauer") == 1)
			|| (compare_str(str, "attack") == 1))
		write(1, "Alert!!!\n", 10);
}

int		main(int argc, char **argv)
{
	int		l;
	int		n;
	int		m;
	char	tmp[50];

	m = 1;
	while (m < argc)
	{
		l = 0;
		n = 0;
		while (argv[m][n])
		{
			if (argv[m][n] != 32)
			{
				tmp[l] = argv[m][n];
				l++;
			}
			n++;
		}
		tmp[n] = '\0';
		ft_spy(tmp);
		m++;
	}
	return (0);
}
