/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eldjabro <eldjabro@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/02 19:39:26 by eldjabro          #+#    #+#             */
/*   Updated: 2017/10/02 19:41:05 by eldjabro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_printable(char *str)
{
	int		i;
	char	cur;

	i = 0;
	while (str[i] != '\0')
	{
		cur = str[i];
		if ((cur >= 0 && cur <= 31))
			return (0);
		i++;
	}
	return (1);
}