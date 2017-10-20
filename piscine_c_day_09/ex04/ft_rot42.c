/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydjabri <ydjabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/08 11:18:34 by ydjabri           #+#    #+#             */
/*   Updated: 2017/09/08 11:19:59 by ydjabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_rot42(char *str);

int		rot42(int c, int basis)
{
	return ((((c - basis) + 42) % 26) + basis);
}

char	*ft_rot42(char *str)
{
	int i;

	i = 0;
	while (str[i] != 0)
	{
		if (‘a’ <= str[i] && str[i] <= ‘z’)
		{
			str[i] = rot42(str[i], ‘a’);
		}
		if (‘A’ <= str[i] && str[i] <= ‘Z’)
		{
			str[i] = rot42(str[i], ‘A’);
		}
		i++;
	}
	return (str);
}
