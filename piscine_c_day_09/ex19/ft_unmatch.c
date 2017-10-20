/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unmatch.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydjabri <ydjabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/08 15:07:41 by ydjabri           #+#    #+#             */
/*   Updated: 2017/09/08 15:18:05 by ydjabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	matched(int *match, int *tab, int length)
{
	int i;
	int j;

	i = 0;
	while (i < length - 1)
	{
		j = i + 1;
		while (j < length)
		{
			if (!match[i] && !match[j] && tab[i] == tab[j])
			{
				match[i] = 1;
				match[j] = 1;
				i++;
				break ;
			}
			j++;
		}
		i++;
	}
}

int		ft_unmatch(int *tab, int length)
{
	int match[length];
	int i;

	i = 0;
	while (i < length)
	{
		match[i++] = 0;
	}
	matched(match, tab, length);
	i = 0;
	while (i < length)
	{
		if (match[i] == 0)
			return (tab[i]);
		i++;
	}
	return (0);
}
