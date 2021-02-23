#include "ft_printf.h"

int     printa_stringa_p(char *str, char *flag)
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

int     printa_grandezza_minus_p(char *str, char *flag, int width, int precisione)
{
    int i;
    int j;
    char    *ret;

    i = 0;
    j = 0;
    if ((ret = malloc(width + 1)) == 0)
        return (-1);
    while (i < 2)
        ret[i++] = '0';
    while (str[j] != 0)
        ret[i++] = str[j++];
    while (i < width)
        ret[i++] = ' ';
    ret[i] = 0;
    i = printa_stringa_p(ret, flag);
    free (ret);
    return (i);
}

int     printa_grandezza_p(char *str, char *flag, int width, int precisione)
{
    char    *ret;
    int     i;
    int     j;

    i = 0;
    j = 0;
    printf("Il carattere è: %c\n", flag[2]);
    if ((ret = malloc(width + 1)) == 0)
            return (-1);
    while (i < width - ft_strlen(str) - 2)
    {
        if (flag[1] == '0' && flag[2] != '1')
            ret[i++] = '0';
        else
            ret[i++] = ' ';
    }
    while (i < width - ft_strlen(str))
        ret[i++] = '0';
    while (str[j] != 0)
        ret[i++] = str[j++];
    ret[i] = 0;
    i = printa_stringa_p(ret, flag);
    free(ret);
    return (i);
}

int    printa_precisione_p(char *str, char *flag, int width, int precisione)
{
    int j;
    int i;
    int count;
    char *ret;

    i = 0;
    j = 0;
    if ((ret = malloc(precisione + 1)) == 0)
            return (-1);
    while (i < precisione - ft_strlen(str))
            ret[i++] = '0';
    while (str[j] != 0)
        ret[i++] = str[j++];
    ret[i] = 0;
    if (flag[0] == '-')
        count = printa_grandezza_minus_p(ret, flag, width, precisione);
    else
        count = printa_grandezza_p(ret, flag, width, precisione);
    free(ret);
    return (count);
}

int puntatore(va_list args, char *flag, int width, int precisione)
{
    int count;
    long int   num;
    char        *str;

    num = va_arg(args, long int);
    str = dtoesa(num);
    printf("La precisione è: %d\n", precisione);
    if (precisione > 0)
        flag[2] = '1';
    if (precisione < ft_strlen(str))
        precisione = ft_strlen(str);
    if (width < precisione + 2)
        width = precisione + 2;
    count = printa_precisione_p(str, flag, width, precisione);
    free (str);
    return (count);
}