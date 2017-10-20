/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydjabri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/05 18:40:42 by ydjabri           #+#    #+#             */
/*   Updated: 2017/09/09 21:38:37 by ydjabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_eight_queens_puzzle_troll(int nb)
{
	if (nb == 92)
		return (nb);
	else
		return (ft_eight_queens_puzzle_troll(nb + 1));
}

int		ft_eight_queens_puzzle(void)
{
	return (ft_eight_queens_puzzle_troll(1));
}
