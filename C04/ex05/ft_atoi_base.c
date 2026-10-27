int	check_base(char *base)
{
	int i;
	int j;

	i = 0;
	if (base == 0 || base[0] == '\0' || base[1] == '\0')
		return 0;
	while (base[i + 1] != '\0')
	{
		j = i + 1;
		if (!((base[i] >= 32 && base[i] <= 126) || (base[j] >= 32 && base[j] <= 126)))
			return (0);
		while (base[j] != '\0')
		{
			if (base[j] == '-' || base[j] == '+')
				return (0);
			if (base[i] == base[j])
				return (0);
			++j;
		}
		++i;
	}
	return (!(base[0] == '-' || base[0] == '+'));
}

int	ft_isspace(char c)
{
	if ((c >= 9 && c <= 13) || c == ' ')
		return (1);
	return (0);		
}

int	ret_index(char* base, char c)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == c)
			return (i);
		++i;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while (str != 0 && ft_isspace(str[i]))
		++i;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= (-1);
		++i;
	}
	while (str[i] != '\0' && (ret_index(base, str[i]) != -1))
	{
		result = result * 10 + ret_index(base, str[i]);
		++i;
	}
	return (sign * result);
}

/*
#include <stdio.h>

int main(int argc, char **argv)
{
	if (argc != 2)
		return 0;
	printf("%d\n", ft_atoi_base(argv[1], "0123456789"));
}
*/
