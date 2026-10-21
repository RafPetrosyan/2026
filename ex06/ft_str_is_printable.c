int	ft_str_is_printable(char *str)
{
	int	i;

	if (str == 0 || str[i] == '\0')
		return (1);
	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 32 && str[i] <= 126))
			return (0);
		++i;
	}
	return (1);
}

/*
#include <stdio.h>
int main()
{
	char str[] = "a a";
	printf("%d %s", ft_str_is_printable(str), str);
}
*/