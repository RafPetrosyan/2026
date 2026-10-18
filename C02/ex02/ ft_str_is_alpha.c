int	ft_str_is_alpha(char *str)
{
	int	i;

	if (str == 0 || str[i] == '\0')
		return (1);
	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')))
			return (0);
		++i;
	}
	return (1);
}

/*
#include <stdio.h>
int main()
{
	char *str = 0;
	printf("%d", ft_str_is_alpha(str));
}
*/