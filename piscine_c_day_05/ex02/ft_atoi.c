/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydjabri <ydjabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/06 17:27:56 by ydjabri           #+#    #+#             */
/*   Updated: 2017/09/06 17:29:43 by ydjabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int number;
	int n_number;
	int cpt;

	cpt = 0;
	number = 0;
	n_number = 0;
	while ((str[cpt] >= 9 && str[cpt] <= 13) || str[cpt] == 32)
		cpt++;
	if (str[cpt] == 45)
		n_number = 1;
	if ((str[cpt] == 43) || (str[cpt] == 45))
		cpt++;
	while (str[cpt] >= 48 && str[cpt] <= 57)
	{
		number *= 10;
		number += ((int)str[cpt] - 48);
		cpt++;
	}
	if (n_number == 1)
		return (-number);
	else
		return (number);
}
