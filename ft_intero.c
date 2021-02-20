#include "ft_printf.h"

int    printa_numero(char *str)
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

int     printa_grandezza_d_minus(char *str, char *flag, int width, int precisione)
{
    char    *ret;
    int     i;

    i = 0;
    if (width > ft_strlen(str))
    {
        ret = malloc(width + 1);
        while (str[i] != 0)
        {
            ret[i] = str[i];
            i++;
        }
        while (i < width)
            ret[i++] = ' ';
        ret[i] = 0;
        i = printa_numero(ret);
        free(ret);
    }
    else
        i = printa_numero(str);
    return (i);
}

int     printa_grandezza_d(char *str, char *flag, int width, int precisione)
{
    char    *ret;
    int     i;
    int     j;

    i = 0;
    j = 0;
    ret = malloc(width + 1);
    if (str[0] == '-' && flag[1] == '0')
    {
        ret[i++] = '-';
        str[0] = '0';
    }
    while (i < width - ft_strlen(str))
    {
        if (flag[1] == '0')
            ret[i++] = '0';
        else
            ret[i++] = ' ';
    }
    while (str[j] != 0)
        ret[i++] = str[j++];
    i = printa_numero(ret);
    free(ret);
    return(i);
}

int printa_estensione_d(char *str, char *flag, int width, int precisione)
{
    char    *ret;
    int     i;
    int     j;

    i = 0;
    j = 0;
    ret = malloc(precisione + 1);
    if (str[0] == '-')
    {
        ret[j++] = '-';
        str[i++] = '0';
    }
    while (j < precisione - ft_strlen(str) + i)
        ret[j++] = '0';
    while (j <= precisione)
        ret[j++] = str[i++];
    ret[j] = 0;
    if (str[0] == '-')
        ret[0] = str[0];
    if (flag[0] == '-')
        i = printa_grandezza_d_minus(ret, flag, width, precisione);
    else
        i = printa_grandezza_d(ret, flag, width, precisione);
    free(ret);
    return (i);
}

int intero(va_list args ,char *flag, int width, int precisione)
{
    int     count;
    int     numero;
    char    *str;

    numero = va_arg(args, int);
    str = ft_itoa(numero);
    if (str[0] == '-' && precisione < ft_strlen(str) - 1)
    {
    //    precisione = ft_strlen(str) - 1;
        precisione = ft_strlen(str);  
        if (width < precisione)
            width = precisione;
    //        width = precisione + 1;
    }
    else if (str[0] != '-' && precisione < ft_strlen(str))
        precisione = ft_strlen(str);
    if (width < precisione)
        width = precisione;
    count = printa_estensione_d(str, flag, width, precisione);
    return (count);
}