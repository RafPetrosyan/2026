int ft_sqrt(int nb)
{
    int i;

    i = 0;
    while (i * i < nb)
        ++i;
    if (nb == i * i)
        return (i);
    return (0);
}


#include <stdio.h>
int main()
{
	printf("%d", ft_sqrt(9));
}
