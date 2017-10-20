/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eldjabro <eldjabro@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/10 15:00:30 by eldjabro          #+#    #+#             */
/*   Updated: 2017/10/10 18:49:52 by eldjabro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int *tab;

	if (!(tab = (int*)malloc(sizeof(*tab) * (max - min + 1))))
		return (0);
	if (max <= min)
	{
		tab = NULL;
		return (0);
	}
	i = 0;
	while (i < max - min)
	{
		tab[i] = min + i;
		i++;
	}
	tab[i] = 0;
	*range = tab;
	return (i);
}

int		main()
{
	int *range;
	int i;
	int size;

	i = 0;
	size = ft_ultimate_range(&range,16,20);
	printf("size:%i",size);
	printf("\ni,range[0][i], &:\n");
	while (i < size)
	{
		printf("%i, %i, %p\n",i, range[i], &range[i]);
		i++;
	}
	return (0);
}
