char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	if (str == 0)
		return (str);
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		++i;
	}
	return (str);
}

/*
#include <stdio.h>
int main()
{
	char str[] = "a .Ba";
	ft_strupcase(str);
	printf("%s", str);
}
*/