#include "ft_printf.h"

void    printa_cstringa(char *str)
{
    int i;

    i = 0;
    while (str[i] != 0)
    {
        write(1, &str[i], 1);
        i++;
    }
}

char *crea_cstringa(char *flag, int width)
{
    int     i;
    char    *str;

    i = 0;
    str = malloc(width + 1);
    while (i < width)
    {
        if (flag[1] == '0' && flag[0] != '-')
        {
            str[i] = '0';
            i++;
        }
        else
        {
            str[i] = ' ';
            i++;
        }
    }
    str[width] = 0;
    return (str);
}

int carattere(va_list args, char *flag, int width)
{
    int     count;
    char    car;
    char    *str;
     
    car = va_arg(args, int);
    if (width <= 1)
    {
        write(1, &car, 1);
        return (1);
    }
    str = crea_cstringa(flag, width);
    if (flag[0] == '-')
        str[0] = car;
    else
        str[width - 1] = car;
    printa_cstringa(str);
    return (ft_strlen(str));
}