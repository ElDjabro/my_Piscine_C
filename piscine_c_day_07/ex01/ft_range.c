/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eldjabro <eldjabro@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/10 14:44:13 by eldjabro          #+#    #+#             */
/*   Updated: 2017/10/10 17:14:17 by eldjabro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		*ft_range(int min, int max)
{
	int i;
	int *tab;

	if (max < min)
		tab = NULL;
	if (!(tab = (int*)malloc(sizeof(*tab) * (max - min))))
		return (NULL);
	i = 0;
	while (i <= (max - min))
	{
		tab[i] = min;
		min++;
		i++;
	}
	return (tab);
}

int		main()
{
	int *table;
	int i = 0;

	table = ft_range(10,12);

	while (table[i])
	{
		printf("%i, %i\n",i, table[i]);
		i++;
	}
	return 0;
}
