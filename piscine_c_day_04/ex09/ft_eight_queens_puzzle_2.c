/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle_21.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydjabri <ydjabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/09 19:44:34 by ydjabri           #+#    #+#             */
/*   Updated: 2017/09/10 17:58:11 by ydjabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int sol[1000];
int chess[81];

void display_solution()
{
	int line = 0;
	int column = 0;
	printf("\n");
	while (line < 8)
	{
		column = 0;
		while (column < 8)
		{
			if (sol[line]==column)
				printf(" X");
			else 
				printf(" +");
			column++;
		}
		printf("\n");
		line++;
	}
}

int  is_free(int line)
{
	int column = 0;
	while (column < line)
	{
		if (chess[column]==chess[line])
			return (0);
		if (chess[column]==chess[line]+(line-column))
			return (0);
		if (chess[column]==chess[line]-(line-column))
			return (0);
		column++;
	}
	return (1);
}

void put_queen(int line) 
{
	int column = 0;
	int unsolved = 1;
	if (unsolved && (line < 8)) 
	{ 
		while (column < 8)
		{ 
			chess[line]=column;
			if (is_free(line))
				put_queen(line + 1);
			column++;
		}
	}
	else
	{
		unsolved = 0;
		while (column < 8)
		{
			sol[column]=chess[column];
			column++;
		}
		display_solution();
	}
}

int main()
{
	int i = 0;
	while (i < 8)
	{
		chess[i] = 0;
		put_queen(0);
		i++;
	}
}
