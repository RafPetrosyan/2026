#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

char return_char(char *str, int *i)
{
	while(str[*i]!= '\0')
	{
		if(str[*i]==' ')
			++(*i);
		else
		{
			return (str[(*i)++]);
		}
	}
	return ('0');
}

void    init(char **matr, char *str, int n) //n -  matrici chap
{
	int	i;
	int	k;

	i = 1;
	k = 0;
	while (i < n - 1)
		matr[0][i++] = return_char(str, &k);
	i = 1;
	while (i < n - 1)
		matr[n - 1][i++] = return_char(str, &k);
	i = 1;
	while (i < n - 1)
		matr[i++][0] = return_char(str, &k);
	i = 1;
	while (i < n - 1)
		matr[i++][n - 1] = return_char(str, &k);
}

void print_map(char **arr)
{
	int	i;
	int j;

	i = 0;
	while (i < 6)
	{
		j = 0;
		while (j < 6)
		{
			write(1, &arr[i][j], 1);
			write(1, " ", 1);
			++j;
		}
		write(1, "\n", 1);
		++i;
	}
}

char **create_matric(int n)
{
	char	**arr;
	
	arr = (char **)malloc((n + 2) * sizeof(int *));
	if (arr == 0)
		return 0;
	while (i < n + 2)
	{
		arr[i] = malloc((n + 2) * sizeof(char));
		++i;
	}
	return (arr);
}

int main(int argc, char **argv)
{
	int	i;
	int	j;
	char	**arr;

	i = 0;
	arr = create_matric
	if (arr == 0)
		return 0;
	while (i < 6)
	{
		j = 0;
		while (j < 6)
		{
			arr[i][j] = '0';
			++j;
		}
		++i;
	}
	init(arr, argv[1], 6);
	print_map(arr);
}

int     chech_opposites_columns(char **matr, int n)
{
    int     i;

	i = 1;
    while (i <= n - 2)
    {
        if (!((matr[0][i] + matr[n - 1][i]) <= n - 1))
            return (0);
		++i;
    }
	return (1);
}

int     chech_opposites_rows(char **matr, int n)
{
    int     i;

    i = 1;
    while (i <= n - 2)
    {
        if (!((matr[i][0] + matr[i][n - 1]) <= n - 1))
                return (0);
		++i;
    }
	return (1);
}
