/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eldjabro <eldjabro@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/08 13:17:16 by eldjabro          #+#    #+#             */
/*   Updated: 2017/10/08 13:20:09 by eldjabro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1 ,&c ,1);
}

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}
