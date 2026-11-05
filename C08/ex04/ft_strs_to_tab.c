#include "ft_stock_str.h"

int ft_strlen(char *str)
{
    int i;

    i = 0;
    if (str == 0)
        return (0);
    while (str[i] != '\0')
        ++i;
    return (i);
}

struct s_stock_str *ft_strs_to_tab(int ac, char **av)
{
	int	i;
	t_stock_str	*arr;

	i = 0;
	arr = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (arr == 0)
		return (0);
	while (i < ac)
	{
		arr[i].size = ft_strlen(av[i]);
		arr[i].str = av[i];
		arr[i].copy = strdup(av[i]);
		if (arr[i].copy == 0)
		{
			while (i-- > 0)
				free(arr[i].copy);
			free(arr);
			return (0);
		}
	}
	arr[i].size = 0;
	arr[i].str = 0;
	arr[i].copy = 0;
	return (arr);
}