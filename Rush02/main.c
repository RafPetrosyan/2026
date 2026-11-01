#include <unistd.h>
#include <fcntl.h>

struct Dictionary
{
	int		key_len;
	char	*key;
	char	*value;
	struct	Dictionary	*next;
};

int	buf_manipul(int fd, char *buffer, int readed, int busy)
{
	int	i;

	i = 0;
	while (i < busy && readed + i < busy)
	{
		buffer[i] = buffer[readed + i];
		++i;
	}
	return (busy - readed + read(fd, buffer + readed, readed));
}

int	ft_is_digit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int ancir_bacatnery(int fd, char *buffer, int busy_count)
{
	int	i;

	while (buffer[0] == ' ')
	{
		i = 0;
		while (buffer[i] == ' ' && i < busy_count);
			++i;
		busy_count = buf_manipul(fd, buffer, i, busy_count);
	}
}

int	hashvir_tvery(int fd, char *buffer, int busy_count)
{
	int	i;
	int	count;

	count = 0;
	while (ft_is_digit(buffer[0]) == 1)
	{
		i = 0;
		while (ft_is_digit(buffer[i]) && i < busy_count);
			++i;
		count += i;
		busy_count = buf_manipul(fd, buffer, i, busy_count);
	}
	return (count);
}

struct Dictionary	*create_dictionary(int	fd)
{
	char	buffer[100];
	char	last_symb;
	int		busy_count;
	int		i;
	int		key_val_length[2];

	key_val_length[0] = 0;
	key_val_length[1] = 0;
	last_symb = buffer[0];
	busy_count = read(fd, buffer, 100);
	while (busy_count != 0)
	{
		ancir_bacatnery(fd, buffer, busy_count);
		if (ft_is_digit(buffer[0]) != 1)
			return (0);
		ancir_bacatnery(fd, buffer, busy_count);
		if (ft_is_digit(buffer[0]) != 1)
			return (0);
		while (buffer[i] == ' ' && i < busy_count && key_val_length[0] == 0)
			++i;
		last_symb = buffer[i - 1];
		busy_count = buf_manipul(fd, buffer, i, busy_count);

	}
}

int main(int argc, char **argv)
{
	int		fd;
	char	*str;

	if (argc == 1)
	{
		fd = open("numbers.dict", O_RDONLY);
		str = argv[1];
	}
	else if (argc == 2)
	{
		fd = open(argv[1], O_RDONLY);
		str = argv[2];
	}
	if (fd == 0)
		return (1);
	
	{
		
	}
	
}