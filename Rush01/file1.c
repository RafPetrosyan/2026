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
	int		i;

	i = 0;	
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

int	num_count(char *str)
{
	int	i;      //index
	int	count;  //tveri qanak

	count = 0;
	i = 0;
	while (str[i] != '\0')
	{
	        if (str[i] >= '0' && str[i] <= '9')
	                count++;
	        i++;
	}
	return (count);
}

int	is_valid_symb(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= '0' && str[i] <= '9') || str[i] == ' '))
			return (0);
		++i;
	}
	return (1);
}

int	numb_check(char *str, int n)
{
	int	i;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ' ')
			++i;
		else if (!(str[i] > '0' && str[i] <= n + '0'))
		{
			// printf("sxal nshany = %c", str[i]);
			return (0);
		}
		++i;
	}
	return (1);
}

int	check_input_validation(char *str)
{
	int	count;

	if (!is_valid_symb(str))
	{
		write(1, "Mutqayin toghum ka chtuylatrvac nish\n", 38);
		return (-1);
	}
	count = num_count(str);
	if (count % 4 != 0)
	{
		write(1, "Mutqayin toghum ezrayin paymannery teri en\n", 44);
		return (-2);
	}
	if (!numb_check(str, count / 4))
	{
		printf("%d\n", count);
		write(1, "Mutqayin toghum ka aravelaguynic mec tvanshan\n", 47);
		return (-3);
	}
	return (0);	
}

void	init_matric_by_zero(char **arr, int n)
{
	int	i;
	int	j;

	i = 0;
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
}


int     check_opposites_columns(char **matr, int n)
{
    int     i;

	i = 1;
    while (i <= n - 2)
    {
        if (!((matr[0][i] + matr[n - 1][i]) <= n - 1 + '0' + '0'))
		{
			printf("%d\n", matr[0][i] + matr[n - 1][i] -'0'-'0');
			write(1, "Ughghahayac ezrayin paymanneric handipakacneri gumary mec e n + 1-ic\n", 70);
            return (0);
		}
		++i;
    }
	return (1);
}

int     check_opposites_rows(char **matr, int n)
{
    int     i;

    i = 1;
    while (i <= n - 2)
    {
        if (!((matr[i][0] + matr[i][n - 1]) <= n - 1 + '0' + '0'))
		{
			write(1, "Horizonakan ezrayin paymanneric handipakacneri gumary mec e n + 1-ic\n", 70);
			return (0);
		}
		++i;
    }
	return (1);
}

	int main(int argc, char **argv)
	{
		char	**arr;
		int		size;
	
		if (argc != 2 || check_input_validation(argv[1]) < 0)
			return (-1);
		size = num_count(argv[1]);
		arr = create_matric(size / 4 + 2);
		if (arr == 0)
			return 0;
		init_matric_by_zero(arr, size / 4 + 2);
		init(arr, argv[1], size / 4 + 2);
		print_map(arr);
		if (!check_opposites_columns(arr, size / 4 + 2) || check_opposites_rows(arr, size / 4 + 2))
			return 0;
	}