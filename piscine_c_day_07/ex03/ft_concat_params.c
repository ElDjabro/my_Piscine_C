/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eldjabro <eldjabro@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/10 19:27:46 by eldjabro          #+#    #+#             */
/*   Updated: 2017/10/11 19:00:17 by eldjabro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>


int		arg_size(int argc, char **argv)
{
	int i;
	int j;
	int size;

	i = 1;
	size = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
			j++;
		size += j;
		i++;
	}
	return (size);
}

char	*ft_concat_params(int argc, char **argv)
{
	int 	size;
	char	*tab;
	int 	i;
	int		j;
	int		k;

	i = 1;
	k = 0;
	size = arg_size(argc, argv);
	if (!(tab = (char*)malloc(sizeof(*tab) * (size + argc - 2 + 1))))
		return (NULL);
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
			tab[k++] = argv[i][j++];
		i++;
		if (i < argc)
			tab[k++] = '\n';
	}
	tab[k] = '\0';
	return (tab);
}

int		main(int argc, char **argv)
{
	char	*c_params;

	c_params = ft_concat_params(argc, argv);
	printf("%s", c_params);
	return (0);
}
