/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nmatch.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydjabri <ydjabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/10 16:36:49 by ydjabri           #+#    #+#             */
/*   Updated: 2017/09/10 16:36:55 by ydjabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	nmatch(char *s1, char *s2)
{
	if (*s1 == 0 && *s2 == 0)
		return (1);
	if (*s1 == *s2 && *s1 != '*')
		return (nmatch(s1 + 1, s2 + 1));
	if (*s2 == '*' && !*s1)
		return (nmatch(s1, s2 + 1));
	if (*s2 == '*' && *s1)
		return (nmatch(s1 + 1, s2) + nmatch(s1, s2 + 1));
	return (0);
}