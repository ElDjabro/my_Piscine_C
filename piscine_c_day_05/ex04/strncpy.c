/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydjabri <ydjabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/06 19:43:56 by ydjabri           #+#    #+#             */
/*   Updated: 2017/09/06 20:39:53 by ydjabri          ###   ########.fr       */
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

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int cpt;

	while (*src)
	{
		dest[cpt] = src[cpt];
		cpt++;
	}
	while (cpt < n)
		dest[cpt++] = '\0';
	return (dest);
}
