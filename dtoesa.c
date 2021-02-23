#include <stdlib.h>

char    *fffdtoesa(long int num)
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