#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	if (str == 0)
		return (0);
	while (str[i] != '\0')
		++i;
	return (i);
}

void    ft_join(int size, char **strs, char *sep)
{

}

char    *ft_strjoin(int size, char **strs, char *sep)
{
    int i;
    int length;
    char    *str;

    i = 0;
    length = 0;
    while (i < size)
        length += ft_strlen(strs[i++]);
    length += ft_strlen(sep) * (size - 1) + 1;
    str = (char *)malloc(sizeof(char) * length);
    if (str == 0)
        return (0);
    i = 0;
    length = 0;
    while (i < size)
    {
        ft_join(&length, )
        
    }
    

    
}
