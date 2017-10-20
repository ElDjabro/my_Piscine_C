#include <stdio.h>

int		ft_isalphanum(char c)
{
	if (48 <= c && c <= 57)
		return (1);
	if (65 <= c && c <= 90)
		return (1);
	if (97 <= c && c <= 122)
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int i;
	
	i = 0;
	while (!(ft_isalphanum(str[i])))
		i++;
	if (ft_isalphanum(str[0]) && (97 <= str[0] && str[0] <= 122))
		str[0] -= 32;
	while (str[i] != '\0')
	{
		if (ft_isalphanum(str[i]) && !ft_isalphanum(str[i - 1]))
		{
			if (97 <= str[i] && str[i] <= 122)
				str[i] -= 32;
		}

		if (ft_isalphanum(str[i]) && ft_isalphanum(str[i - 1]))
		{
			if (65 <= str[i] && str[i] <= 90)
				str[i] += 32;
		}
		i++;
	}
	return (str);
}

int		main(void)
{
	char str[] = "	bonJour ? commEnt Allez+42Vous		?!";
	printf("%s", ft_strcapitalize(str));
	return (0);
}
