/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_par.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eldjabro <eldjabro@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/17 20:15:44 by eldjabro          #+#    #+#             */
/*   Updated: 2017/10/17 20:15:56 by eldjabro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

fndef FT_STOCK_PAR_H
# define FT_STOCK_PAR_H

void			ft_putchar(char c);
typedef struct	s_stock_par
{
	int		size_param;
	char	*str;
	char	*copy;
	char	**tab;
}				t_stock_par;

#endif
