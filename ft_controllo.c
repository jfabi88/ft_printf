#include "ft_printf.h"

int     controllo_precisione(va_list args, char *ret)
{
    int precisione;
    int i;

    precisione = -1;
    i = 0;
    while (ret[i] && ret[i] != '.')
        i++;
    if (ret[i] == '.')
    {
        if (ret[i + 1] == '*')
            precisione = va_arg(args, int);
        else
        {
            i++;
            precisione = 0;
            while (ft_isdigit(ret[i]))
            {
                precisione = precisione * 10 + ret[i] - '0';
                i++;
            }
        }
    }
    return (precisione);
}

int     controllo_estensione(va_list args, char *in)
{
    int i;
    int estensione;

    i  = 0;
    estensione = 0;
    while (in[i])
    {
        if (ft_isdigit(in[i]) && ft_isdigit(in[i - 1]) != 1 && in[i - 1] != '.')
        {
            estensione = 0;
            while (ft_isdigit(in[i]))
                estensione = estensione * 10 + in[i++] - '0';
        }
        if (in[i] == '*' && in[i - 1] != '.')
            estensione = va_arg(args, int);
        i++;
    }
    return (estensione);
}

char	*controllo_conv(char *input)
{
	char	*ret;
    int     i;
    int     j;

    i = 0;
    j = 0;
    while (input[i] && isconv(input[i]) == 0)
        i++;
    ret = malloc(i + 2);
    if (ret == 0)
    {
        free(ret);
        return (0);
    }
    while (j <= i)
    {
        ret[j] = input[j];
        j++;
    }
    ret[j] = 0;
    return (ret);
}

char	*controllo_flag(char *input)
{
	char    *flag;

    flag = ft_strdup("1111");
    if (ft_strchr(input, '-') != 0)
        flag[0] = '-';
    if (ft_strchr(input, '0') != 0 && ft_isdigit(*(ft_strchr(input, '0') - 1)) != 1)
        flag[1] = '0';
    if (ft_strchr(input, '.') != 0)
    {
        if (*(ft_strchr(input, '.') + 1) == '*')
            flag[2] = '*';
        else
            flag[2] = '.';
    }
    if (ft_strchr(input, '*') != 0 && *(ft_strchr(input, '*') - 1) != '.')
        flag[3] = '*';
    return (flag);
}

int	controllo(char *input, va_list args)
{
    char    *flag;
	char	*ret;
    int     width;
	int		count;
    int     precisione;

    count = 0;
	if ((ret = controllo_conv(input)) == 0)
        return (-1);
    flag = controllo_flag(ret);
    width = controllo_estensione(args, ret);
    precisione = controllo_precisione(args, ret);
    if (ret[ft_strlen(ret) - 1] == 'c')
		count = carattere(args, flag, width);
	else if (ret[ft_strlen(ret) - 1] == 's')
		count = stringa(args, flag, width, precisione);
	//else if (ret[ft_strlen(ret) - 1] == 'p')
	//	count = puntatore(args, flag, width, precisione);
	if (ret[ft_strlen(ret) - 1] == 'd' || ret[0] == 'i')
		count = intero(args, flag, width, precisione);
	//if (ret[ft_strlen(ret - 1]) == 'u')
	//	count = nonsegnato(&args, flag, width);
	//if (ret[ft_strlen(ret) - 1] == 'x')
	//	count = esadecimale(&args, flag, width);
	//if (ret[ft_strlen(ret) - 1] == 'X')
	//	count = maxesadeccimale(&args, flag, width);
	return (count);
}