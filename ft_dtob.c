#include <stdio.h>
#include <stdlib.h>
#include "libft.h"
#include "ft_printf.h"

char    *ft_comp(char *str)
{
    int i;

    i = 0;
    while (str[i] != 0)
    {
        if (str[i] == '1')
            str[i] = '0';
        else
            str[i] = '1';
        i++;
    }
    i--;
    while (str[i] == '1')
        i--;
    str[i] = '1';
    return (str);
}

int conta(int div)
{
    int i;
    int n;

    i = 0;
    n = 2147483647;
    while (n > 0)
    {
        i++;
        n /= div;
    }
    return (i);
}

char    *ntob(int n, int bit, char *str)
{
    int     i;

    i = bit - 1;
    while (i >= 0)
    {
        if (n % 2 == 1)
            str[i] = '1';
        else
            str[i] = '0';
        n /= 2;
        i--;
    }
    return (str);
}

char    *dtob(int n, int bit)
{
    char    *ret;
    int     div;
    int     i;

    i = 1;
    div = 2;
    while (i++ < bit)
        div *= 2;
    if ((ret = malloc(bit * conta(div) + 1)) == 0)
        return (0);
    ret[bit * conta(div)] = 0;
    i = bit * conta(div);
    while (n > 0)
    {
        i -= bit;
        ntob(n % div, bit, &ret[i]);
        n /= div;
    }
    while (i >= 0)
        ret[i--] = '0';
    return (ret);
}

char *ft_dtob(int n, int bit)
{
    char    *ret;

    if (n > 0)
        ret = dtob(n, bit);
    else
    {
        if (n == -2147483648)
        {
            ret = dtob(2147483647, bit);
            ret = ft_comp(ret);
            ret[ft_strlen(ret) - 1] = '0';
        }
        else
        {
            ret = dtob(n * -1, bit);
            ret = ft_comp(ret);
        }
    }
    return (ret);
}