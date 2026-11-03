#include <stdlib.h>

int check_charset(char c, char *charset)
{
    int i;

    i = 0;
    while (charset[i] != '\0')
    {
        if (charset[i] == c)
            return (1);
        ++i;
    }
    return (0);
}

int word_count(char *str)
{
    int i;
    int count;

    i = 0;
    count = 0;
    while (str[i] != '\0')
    {
        if ((i == 0 && check_charset(str[0]) == 0)
                || (i != 0 && check_charset(str[i]) == 0 && check_charset(str[i - 1]) == 1))
            ++count;
        ++i;
    }
    return (count);
}

int get_length(int  *i, char *str, char *charset)
{
    int j;

    j = 0;
    while (check_charset(str[*i]))
        ++(*i);
    while (str[*i + j] != '\0' && check_charset(*i + j) == 0)
        ++j;
    *i += j;
    return (j);
}

void    write_word(char *dest, char *src, int *i, char *charset)
{
    int j;

    j = 0;
    while (check_charset(str[*i]))
        ++(*i);
    while (str[*i] != '\0' && check_charset(*i) == 0)
    {
        dest[j] = src[*i];
        ++j;
        ++(*i);
    }
    dest[j] = '\0';
}

char **ft_split(char *str, char *charset)
{

}
