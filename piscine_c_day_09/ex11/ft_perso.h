/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_perso.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydjabri <ydjabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/08 16:57:27 by ydjabri           #+#    #+#             */
/*   Updated: 2017/09/08 17:03:18 by ydjabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FT_PERSO_H
# define __FT_PERSO_H

# include <string.h>
# define SAVE_THE_WORLD "NONE...HAHAHA"

typedef struct	s_perso
{
	char	*name;
	float	life;
	int		age;
	char	*profession;

}				t_perso;

#endif
