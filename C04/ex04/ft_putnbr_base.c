#include <unistd.h>

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

void	rec_putnbr(long nbr, char *base, int akan)
{

	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr = nbr * (-1);
	}
	if (nbr > akan - 1)
		rec_putnbr(nbr / akan, base, akan);
	write(1, &base[nbr % akan], 1);
}

void    ft_putnbr_base(int nbr, char *base)
{
	int		akan;

	akan = 0;
	while (base[akan] != '\0')
		++akan;		
	if (check_base(base) == 1)
	{
		rec_putnbr((long)nbr, base, akan);
	}
}

/*

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv)
{
	if (argc != 2)
		return 0;
	ft_putnbr_base(atoi(argv[1]), "0123456789abcdef");
}
*/
