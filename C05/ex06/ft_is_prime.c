int ft_is_prime(int nb)
{
	int	i;

	i = 3;
	if (nb < 2)
		return (0);
	if (nb == 2)
		return (1);
	if (nb % 2 == 0)
		return (0);
	while (i * i <= nb)
	{
		if (nb % i == 0)
			return (0);
		++i;
	}
	return (1);
}

/*
#include <stdio.h>
int main()
{
	int	i;

	i = 0;
	while (i < 1000)
	{
		if (ft_is_prime(i) == 1)
			printf("%d, ", i);
		++i;
	}
}
*/