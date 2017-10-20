#include <stdio.h>

int		ft_str_is_alpha(char *str)
{
	int cpt;

	cpt = 0;
	while (str[cpt] != '\0')
	{
		if (!(97 <= str[cpt] && str[cpt] <= 122) && !(65 <= str[cpt] && str[cpt] <= 90))
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
