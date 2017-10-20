/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eldjabro <eldjabro@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/11 19:01:58 by eldjabro          #+#    #+#             */
/*   Updated: 2017/10/16 15:37:05 by eldjabro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	**alloc_words(char *str, char **tab_word)
{
	int 	i;
	int 	c_word;

	i = 0;
	c_word = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		i++;
	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		{
			if (33 <= str[i - 1] && str[i - 1] <= 126)
				c_word += 1;
		}
		i++;
	}
	if (str[i] == '\0')
	{
		if (33 <= str[i - 1] && str[i - 1] <= 126)
			c_word += 1;
	}
	tab_word = (char**)malloc(sizeof(*tab_word) * (c_word + 1));
	tab_word[c_word] = NULL;
	return (tab_word);
}

char	**alloc_strings(char *str, char **tab_word)
{
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	k = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		i++;
	while (str[i] != '\0')
	{
		i++;
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\0')
		{
			tab_word[j] = (char*)malloc(sizeof(**tab_word) * (k + 1));
			j++;
			k = 0;
			while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
				i++;
		}
		k++;
	}
	return (tab_word);
}

char	**fill_tab_word(char *str, char **tab_word)
{
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	k = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		i++;
	while (str[i] != '\0')
	{
		tab_word[k][j] = str[i];
		j++;
		i++;
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		{
			tab_word[k][j] = '\0';
			k++;
			j = 0;
			while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
				i++;
		}		
	}
	return (tab_word);
}

char	**ft_split_whitespaces(char *str)
{
	char **tab_word;

	tab_word = NULL;
	tab_word = alloc_words(str, tab_word);
	tab_word = alloc_strings(str, tab_word);
	tab_word = fill_tab_word(str, tab_word);
	return (tab_word);
}

int		main()
{
	char	*phrase = " \t  m\ny name is\t hello\n\t  world\t \n";
	char 	**table = ft_split_whitespaces(phrase);

	printf("%s\n", phrase);
	while (*table)
		printf("%s, ", *table++);
	return 0;
}
