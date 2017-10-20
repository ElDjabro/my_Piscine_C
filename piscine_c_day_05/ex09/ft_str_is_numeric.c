#include <stdio.h>

int		ft_str_is_alpha(char *str)
{
	int cpt;

	cpt = 0;
	while (str[cpt] != '\0')
	{
		if (!('1' <= str[cpt] && str[cpt] <= '9'))
			return (0);
		cpt++;
	}
	return (1);
}

int		main(void)
{
	char *str = "bonjour";
	printf("%d", ft_str_is_alpha(str));
	return (0);
}
