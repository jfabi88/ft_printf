/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stringa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfabi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 12:18:36 by jfabi             #+#    #+#             */
/*   Updated: 2021/02/16 12:18:41 by jfabi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int    printa_stringa(char *str)
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

int     printa_grandezza_minus(char *str, int width)
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
    i = printa_stringa(ret);
    free(ret);
    return (i);
}

int    printa_grandezza(char *str, char *flag, int width, int precisione)
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
    i = printa_stringa(ret);
    free(ret);
    return (i);
}

int    printa_precisione(char *str, char *flag, int width, int precisione)
{
    int i;
    int count;
    char *temp;

    i = 0;
    if (precisione >= 0)
    {
        while (str[i] != 0 && i < precisione)
            i++;
        temp = malloc(i + 1);
        ft_strlcpy(temp, str, i + 1);
    }
    else
    {
        temp = malloc(ft_strlen(str) + 1);
        ft_strlcpy(temp, str, ft_strlen(str) + 1);
    }
    if (flag[0] == '-')
        count = printa_grandezza_minus(temp, width);
    else
        count = printa_grandezza(temp, flag, width, precisione);
    free(temp);
    return (count);
}

int stringa(va_list args ,char *flag, int width, int precisione)
{
    int     i;
    int     count;
    char    *str;

    i = 0;
    str = va_arg(args, char *);
    if (width < precisione && width < ft_strlen(str) && precisione >= 0)
        width = precisione;
    if (width < ft_strlen(str) && precisione < 0)
        width = ft_strlen(str);
    count = printa_precisione(str, flag, width, precisione);
    return (count);
}