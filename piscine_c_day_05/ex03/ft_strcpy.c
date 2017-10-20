/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydjabri <ydjabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/06 17:37:15 by ydjabri           #+#    #+#             */
/*   Updated: 2017/09/06 21:44:13 by ydjabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int len_str(char *str)
{
	int l;

	l = 0;
	while (str[l] != '\0')
	{
		l++;
	}
	return (l);
}

char	*ft_strcpy(char *dest, char *src)
{
	int		index;
	int		l;
	char	tmp;

	index = 0;
	l = len_str(src);
	while (src[index] != src[l])
	{
		tmp = src[index];
		dest[index] = tmp;
		index++;
	}
	if (dest[l] != '\0')
		dest[l] = '\0';
	return dest;
}

int main()
{

	char *s = "tota";
	ft_putchar(s[4]);
	char d;
	char *str = ft_strcpy(&d, s);
	ft_putstr(str);
	ft_putchar(str[4]);
	ft_putchar('\n');
	return (0);
}
