#include "ft_printf.h"

int    printa_esadecimaleX(char *str)
{
    int i;

    i = 0;
    while (str[i] != 0)
    {
        write(1, &str[i], 1);
        i++;
    }
    return (i);
}

int     printa_grandezzaX_minus(char *str, int width)
{
    char    *ret;
    int     i;
    int     j;

    i = 0;
    j = 0;
    ret = malloc(width + 1);
    while (str[i])
    {
        ret[i] = str[i];
        i++;
    }
    while (i < width)
        ret[i++] = ' ';
    ret[i] = 0;
    i = printa_esadecimaleX(ret);
    free(ret);
    return (i);
}

int    printa_grandezzaX(char *str, char *flag, int width, int precisione)
{
    char    *ret;
    int     i;
    int     j;

    i = 0;
    j = 0;
    ret = malloc(width + 1);
    while (i < (width - ft_strlen(str)))
    {
        if (flag[1] == '0')
            ret[i] = '0';
        else
            ret[i] = ' ';
        i++;
    }
    while (i < width)
        ret[i++] = str[j++];
    ret[i] = 0;
    i = printa_esadecimaleX(ret);
    free(ret);
    return (i);
}

int    printa_precisioneX(char *str, char *flag, int width, int precisione)
{
    int j;
    int i;
    int count;
    char *temp;

    i = 0;
    j = 0;
    temp = malloc(precisione + 1);
    while (i < precisione - ft_strlen(str))
        temp[i++] = '0';
    while (str[j] != 0)
        temp[i++] = str[j++];
    temp[i] = 0;
    if (flag[0] == '-')
        count = printa_grandezzaX_minus(temp, width);
    else
        count = printa_grandezzaX(temp, flag, width, precisione);
    free(temp);
    return (count);
}

int esadecimalebig(va_list args ,char *flag, int width, int precisione)
{
    long int i;
    int     count;
    char    *str;

    i = va_arg(args, unsigned int);
    str = dtoesabig(i);
    if (precisione < ft_strlen(str))
        precisione = ft_strlen(str);
    if (width < precisione)
        width = precisione;
    count = printa_precisioneX(str, flag, width, precisione);
    return (count);
}