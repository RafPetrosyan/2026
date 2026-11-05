#ifndef FT_STOCK_STR_H
# define FT_STOCK_STR_H

#include <stdlib.h>
#include <string.h>

typedef struct	s_stock_str
{
	int		size;
	char	*str;
	char	*copy;
} t_stock_str;

#endif