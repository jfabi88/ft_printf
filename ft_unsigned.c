#include "ft_printf.h"

int    printa_nonsegnato(char *str)
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

int     printa_grandezza_u_minus(char *str, char *flag, int width, int precisione)
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
        i = printa_nonsegnato(ret);
        free(ret);
    }
    else
        i = printa_nonsegnato(str);
    return (i);
}

int     printa_grandezza_u(char *str, char *flag, int width, int precisione)
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
    ret[i] = 0;
    i = printa_nonsegnato(ret);
    free(ret);
    return(i);
}

int printa_estensione_u(char *str, char *flag, int width, int precisione)
{
    char    *ret;
    int     i;
    int     j;

    i = 0;
    j = 0;
    if (str[0] == '-')
    {
        j++;
        i++;
    }
    ret = malloc(precisione + i + 1);
    while (j < precisione - ft_strlen(str) + 2 * i)
        ret[j++] = '0';
    while (j <= precisione)
        ret[j++] = str[i++];
    ret[j] = 0;
    if (str[0] == '-')
        ret[0] = str[0];
    if (flag[0] == '-')
        i = printa_grandezza_u_minus(ret, flag, width, precisione);
    else
        i = printa_grandezza_u(ret, flag, width, precisione);
    free(ret);
    return (i);
}

int nonsegnato(va_list args ,char *flag, int width, int precisione)
{
    int     count;
    unsigned int     numero;
    char    *str;

    numero = va_arg(args, unsigned int);
    str = ft_utoa(numero);
    if (str[0] == '-' && precisione < ft_strlen(str) - 1)
    {
        precisione = ft_strlen(str) - 1;  
        if (width < precisione)
            width = precisione + 1;
    }
    else if (str[0] != '-' && precisione < ft_strlen(str))
        precisione = ft_strlen(str);
    if (width < precisione)
        width = precisione;
    count = printa_estensione_u(str, flag, width, precisione);
    return (count);
}