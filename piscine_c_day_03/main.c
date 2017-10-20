/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydjabri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/06 08:56:15 by ydjabri           #+#    #+#             */
/*   Updated: 2017/09/06 21:31:29 by ydjabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#include "ex00/ft_ft.h"
#include "ex01/ft_ultimate_ft.h"
#include "ex02/ft_swap.h"
#include "ex03/ft_div_mod.h"
#include "ex04/ft_ultimate_div_mod.h"
#include "ex05/ft_putstr.h"
#include "ex06/ft_strlen.h"
#include "ex07/ft_strrev.h"
#include "ex08/ft_atoi.h"
#include "ex09/ft_sort_integer_table.h"

#define TAB_SIZE(x)  (sizeof(x) / sizeof((x)[0]))
#define RED "\x1b[31m"
#define GREEN "\x1b[32m"
#define RESET "\x1b[0m"

void	print_str(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (isprint(str[i]))
			printf("%c", str[i]);
		else if ((str[i] >= 7) && (str[i] <= 13))
			printf("[%d]", (int)(str[i]));
		else
			printf("%c", str[i]);
		i++;
	}
}

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_putnbr(int nb)
{
	int	digits[50];
	int	i;
	int order;

	if (nb < 0)
	{
		nb *= -1;
		ft_putchar('-');
	}
	if (nb == 0)
	{
		ft_putchar('0');
		return ;
	}
	i = 0;
	while (nb != 0)
	{
		digits[i++] = nb % 10;
		nb = nb / 10;
	}
	order = i;
	i = 0;
	while (i < order)
		ft_putchar(digits[order - 1 - i++] + 48);
}

int		main(void)
{
	char str[20] = "\n\n- Exo #00:\n";
	write(1, str, sizeof(str));
	int a;
	ft_ft(&a);
	ft_putnbr(a);

	str[10] = '1';
	write(1, str, sizeof(str));
	int p = 101;
	int *p1 = &p;
	int **p2 = &p1;
	int ***p3 = &p2;
	int ****p4 = &p3;
	int *****p5 = &p4;
	int ******p6 = &p5;
	int *******p7 = &p6;
	int ********p8 = &p7;
	int *********p9 = &p8;
	ft_ultimate_ft(p9);
	ft_putnbr(*********p9);

	str[10] = '2';
	write(1, str, sizeof(str));
	a = 6;
	int b = -10;
	ft_putnbr(a);
	ft_putchar(',');
	ft_putnbr(b);
	ft_putchar('\n');
	ft_swap(&a, &b);
	ft_putnbr(a);
	ft_putchar(',');
	ft_putnbr(b);
	ft_putchar('\n');

	str[10] = '3';
	write(1, str, sizeof(str));
	int div;
	int mod;
	a = 500;
	b = 25;
	ft_div_mod(a, b, &div, &mod);
	ft_putnbr(a);
	ft_putchar('/');
	ft_putnbr(b);
	ft_putchar('=');
	ft_putnbr(div);
	ft_putchar('r');
	ft_putnbr(mod);
	ft_putchar('\n');

	str[10] = '4';
	write(1, str, sizeof(str));
	ft_ultimate_div_mod(&a, &b);
	ft_putnbr(a);
	ft_putchar(',');
	ft_putnbr(b);
	ft_putchar('\n');

	str[10] = '5';
	write(1, str, sizeof(str));
	char strtest[40] = "Omae wa mou shindeiru.";
	ft_putstr(strtest);

	str[10] = '6';
	write(1, str, sizeof(str));
	char strtest2[10] = "Nani ??";
	ft_putnbr(ft_strlen(strtest2));
	ft_putchar('=');
	ft_putnbr(7);
	ft_putchar('\n');

	str[10] = '7';
	write(1, str, sizeof(str));
	char revstr_test[20];
    strcpy(revstr_test, ft_strrev(strtest2));
	ft_putstr(revstr_test);
	
	str[10] = '8';
	write(1, str, sizeof(str));
	int		k;
	int		z;
	int		y;
	char	*a_str[] = {
		"0",
		"1",
		"42",
		"5435",
		"9999999",
		"-2147483648",
		"2147483647",
		"   8543",
		"\f3541",
		"\n5643",
		"\r397+",
		"\t8513",
		"\v9876-",
		"65435+--+",
		"def58453",
		"5486helllo",
		"\f-3541",
		"\n-5643",
		"-\r-397+",
		"---84648-+",
		"&%64",
		"125\n12",
		"  -2",
		"  2",
		"  +5896df",
		"  + 563",
		"++4653",
		" + 45631dsf-+"
	};

	k = 0;
	while (k < (int)TAB_SIZE(a_str))
	{
		printf("Testing value: {");
		print_str(a_str[k]);
		printf("} -> ");
		z = ft_atoi(a_str[k]);
		y = atoi(a_str[k]);
		if (z != y)
		{
			printf(RED"error on test {");
			print_str(a_str[k]);
			printf("}: \n> atoi:{%d}\n> ft_atoi:{%d}\n"RESET, atoi(a_str[k]), ft_atoi(a_str[k]));
			return (-1);
		}
		printf("[%d]\n", z);
		k++;
	}
	printf(GREEN"All test passed :)\n"RESET);
	

	str[10] = '9';
	write(1, str, sizeof(str));
	int test[20] = {234,45,67,3,5,64,2,3,5,65,67,300};
	ft_sort_integer_table(test, 12);
	int i = 0;
	while (i < 12)
	{	
		ft_putnbr(test[i]);
		ft_putchar(',');
		ft_putchar(' ');
		i++;
	}

	return (0);
}
