char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	if (str == 0)
		return (str);
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		++i;
	}
	return (str);
}

/*
#include <stdio.h>
int main()
{
	char str[] = "a .Ba";
	ft_strlowcase(str);
	printf("%s", str);
}
*/