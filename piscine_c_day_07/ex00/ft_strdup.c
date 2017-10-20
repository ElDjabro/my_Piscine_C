/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eldjabro <eldjabro@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/10 14:17:39 by eldjabro          #+#    #+#             */
/*   Updated: 2017/10/10 14:41:42 by eldjabro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int i;
	char *tab;

	i = 0;
	if (!(tab = (char*)malloc(sizeof(*tab) * (ft_strlen(src) + 1))))
		return (NULL);
	while (src[i] != '\0')
	{
		tab[i] = src[i];
		i++;
	}
	tab[i] = '\0';
	return (tab);
}

int		main(void)
{
	char	*in="hello world";
	char	*out1 = strdup(in);
	char	*out2 = ft_strdup(in);

	printf("in: %s, %p\n", in, &in);
	printf("strdup: %s, %p\n", out1, &out1);
	printf("ft_strdup: %s, %p\n", out2, &out2);
	return (0);
}
