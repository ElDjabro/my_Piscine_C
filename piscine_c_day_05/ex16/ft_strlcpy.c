/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eldjabro <eldjabro@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/06 13:58:33 by eldjabro          #+#    #+#             */
/*   Updated: 2017/10/06 14:00:07 by eldjabro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


 int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	char			*d;
	char			*s;
	unsigned int	n;

	d = dest;
	s = src;
	n = size;
	if (n != 0)
	{
		while (!--n)
		{
			if ((*d++ = *s++) == '\0')
				break ;
		}
	}
	if (n == 0 && size != 0)
		*d = '\0';
	while (*s)
		s++;
	return (s - src);
}
