/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydjabri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/04 09:15:48 by ydjabri           #+#    #+#             */
/*   Updated: 2017/09/06 14:39:14 by ydjabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int		len_str;
	int		cpt;
	char	tmp;

	len_str = 0;
	cpt = 0;
	while (str[len_str] != '\0')
		len_str++;
	len_str -= 1;
	while (cpt <= len_str)
	{
		tmp = str[len_str];
		str[len_str] = str[cpt];
		str[cpt] = tmp;
		len_str--;
		cpt++;
	}
	return (str);
}
