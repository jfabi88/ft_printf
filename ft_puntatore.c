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
    while(i < (precisione - ft_strlen(str)))
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
    if ((ret = malloc(width + 1)) == 0)
            return (-1);
    while (i < precisione - ft_strlen(str) || i < width - ft_strlen(str))
    {
        if ((width - precisione) <= i || (precisione < 0 && flag[1] == '0'))
            ret[i++] = '0';
        else
            ret[i++] = ' ';
    }
    while (i < (width - ft_strlen(str)))
        ret[i++] = '0';
    while (str[j] != 0)
        ret[i++] = str[j++];
    ret[i] = 0;
    i = printa_stringa_p(ret, flag);
    free(ret);
    return (i);
}

char    *conversione(long int num)
{
    char    *conv;
    char    *str;
    int     i;
    long int     d;

    i = 1;
    d = 16;
    while (num / d >= 1)
    {
        d *= 16;
        i++;
    }
    str = malloc(i + 1);
    str[i--] = 0;
    conv = "0123456789abcdef";
    while (num / 16 >= 1)
    {
        str[i] = conv[(num % 16)];
        i--;
        num /= 16;
    }
    str[i] = conv[(num % 16)];
    return (str);
}

int puntatore(va_list args, char *flag, int width, int precisione)
{
    int i;
    long int   num;
    char        *str;

    num = va_arg(args, long int);
    str = conversione(num);
    if (width < ft_strlen(str) + 2)
        width = ft_strlen(str) + 2;
    if (flag[0] == '-')
        i = printa_grandezza_minus_p(str, flag, width, precisione);
    else
        i = printa_grandezza_p(str, flag, width, precisione);
    return (i);
}