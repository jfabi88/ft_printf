char    *ft_complemento(char *str)
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
    while (str[i] == '1')
        i--;
    str[i] = '1';
    return (str);
}