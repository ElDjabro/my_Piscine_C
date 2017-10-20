/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_destroy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydjabri <ydjabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/08 11:41:50 by ydjabri           #+#    #+#             */
/*   Updated: 2017/09/08 12:17:31 by ydjabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_ultimator.h"

void	ft_destroy(char ***factory)
{
	int cpt_p;
	int cpt_pp;

	cpt_p = 0;
	cpt_pp = 0;
	while (factory[cpt_pp] != NULL)
	{
		while (factory[cpt_pp][cpt_p] != NULL)
		{
			free(factory[cpt_pp][cpt_p]);
			cpt_pp++;
		}
		cpt_p = 0;
		cpt_pp++;
	}
	free(factory);
}
