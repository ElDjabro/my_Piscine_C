/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_integer_table.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydjabri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/04 13:52:50 by ydjabri           #+#    #+#             */
/*   Updated: 2017/09/06 10:38:32 by ydjabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_integer_table(int *tab, int size)
{
	int i;
	int tmp;

	i = 1;
	tmp = 0;
	while (i < size)
	{
		if (tab[i] < tab[i - 1])
		{
			tmp = tab[i];
			tab[i] = tab[i - 1];
			tab[i - 1] = tmp;
			i = 1;
		}
		else
			i++;
	}
}
