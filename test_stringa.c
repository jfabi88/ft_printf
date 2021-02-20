#include <stdio.h>
#include "ft_printf.h"

int test_s()
{
    char    *str;
    int     num1;
    int     num2;

    str = "ciao";
    printf("Test_s\n");
    num1 = printf("La sua stringa e': %s\n", str);
    num2 = ft_printf("La mia stringa e': %s\n", str);
    if (num1 == num2)
        return (1);
    printf("Il suo numero e': %d\n", num1);
    printf("Il mio numero e': %d\n", num2);
    return (0);
}

int test_s_grandezza()
{
    char    *str;
    int     num1;
    int     num2;

    str = "ciao";
    printf("Test_s_grandezza\n");
    num1 = printf("La sua stringa e': %20s\n", str);
    num2 = ft_printf("La mia stringa e': %20s\n", str);
    if (num1 == num2)
        return (1);
    printf("Il suo numero e': %d\n", num1);
    printf("Il mio numero e': %d\n", num2);
    return (0);
}

int test_s_grandezza_minus()
{
    char    *str;
    int     num1;
    int     num2;

    str = "ciao";
    printf("Test_s_grandezza_minus\n");
    num1 = printf("La sua stringa e': %-5s\n", str);
    num2 = ft_printf("La mia stringa e': %-5s\n", str);
    if (num1 == num2)
        return (1);
    printf("Il suo numero e': %d\n", num1);
    printf("Il mio numero e': %d\n", num2);
    return (0);
}

int test_s0()
{
    char    *str;
    int     num1;
    int     num2;

    str = "ciao";
    printf("Test_s0\n");
    num1 = printf("La sua stringa e': %06s\n", str);
    num2 = ft_printf("La mia stringa e': %06s\n", str);
    if (num1 == num2)
        return (1);
    printf("Il suo numero e': %d\n", num1);
    printf("Il mio numero e': %d\n", num2);
    return (0);
}

int test_s0_minus()
{
    char    *str;
    int     num1;
    int     num2;

    str = "ciao";
    printf("Test_s0_minus\n");
    num1 = printf("La sua stringa e': %-0s\n", str);
    num2 = ft_printf("La mia stringa e': %-0s\n", str);
    if (num1 == num2)
        return (1);
    printf("Il suo numero e': %d\n", num1);
    printf("Il mio numero e': %d\n", num2);
    return (0);
}

int test_s_asterisco()
{
    char    *str;
    int     num1;
    int     num2;

    str = "ciao";
    printf("Test_s_asterisco\n");
    num1 = printf("La sua stringa e': %*s\n", 17, str);
    num2 = ft_printf("La mia stringa e': %*s\n", 17, str);
    if (num1 == num2)
        return (1);
    printf("Il suo numero e': %d\n", num1);
    printf("Il mio numero e': %d\n", num2);
    return (0);
}

int test_s_astenum()
{
    char    *str;
    int     num1;
    int     num2;

    str = "ciao";
    printf("Test_s_astenum\n");
    num1 = printf("La sua stringa e': %*89s\n", 17, str);
    num2 = ft_printf("La mia stringa e': %*89s\n", 17, str);
    if (num1 == num2)
        return (1);
    printf("Il suo numero e': %d\n", num1);
    printf("Il mio numero e': %d\n", num2);
    return (0);
}

int test_s_precision1()
{
    char    *str;
    int     num1;
    int     num2;

    str = "ciao";
    printf("Test_s_precision1\n");
    num1 = printf("La sua stringa e': %-.1s\n", str);
    num2 = ft_printf("La mia stringa e': %-.1s\n", str);
    if (num1 == num2)
        return (1);
    printf("Il suo numero e': %d\n", num1);
    printf("Il mio numero e': %d\n", num2);
    return (0);
}

int test_s_precision2()
{
    char    *str;
    int     num1;
    int     num2;

    str = "ciao";
    printf("Test_s_precision2\n");
    num1 = printf("La sua stringa e': %.*s\n", 2, str);
    num2 = ft_printf("La mia stringa e': %.*s\n", 2, str);
    if (num1 == num2)
        return (1);
    printf("Il suo numero e': %d\n", num1);
    printf("Il mio numero e': %d\n", num2);
    return (0);
}

int test_s_precision3()
{
    char    *str;
    int     num1;
    int     num2;

    str = "ciao";
    printf("Test_s_precision3\n");
    num1 = printf("La sua stringa e': %.0s\n", str);
    num2 = ft_printf("La mia stringa e': %.0s\n", str);
    if (num1 == num2)
        return (1);
    printf("Il suo numero e': %d\n", num1);
    printf("Il mio numero e': %d\n", num2);
    return (0);
}

int test_s_precision4()
{
    char    *str;
    int     num1;
    int     num2;

    str = "ciao";
    printf("Test_s_precision4\n");
    num1 = printf("La sua stringa e': %.s\n", str);
    num2 = ft_printf("La mia stringa e': %.s\n", str);
    if (num1 == num2)
        return (1);
    printf("Il suo numero e': %d\n", num1);
    printf("Il mio numero e': %d\n", num2);
    return (0);
}

/*int test_s_crisi()
{
    char    *str;
    int     num1;
    int     num2;

    str = "ciao";
    printf("Test_s_crisi\n");
    num1 = printf("La sua stringa e': %.*s\n", str);
    num2 = ft_printf("La mia stringa e': %.*s\n", str);
    if (num1 == num2)
        return (1);
    printf("Il suo numero e': %d\n", num1);
    printf("Il mio numero e': %d\n", num2);
    return (0);
}*/


int test_s_crisi2()
{
    char    *str;
    int     num1;
    int     num2;

    str = "ciao";
    printf("Test_s_crisi2\n");
    num1 = printf("La sua stringa e': %5s\n");
    num2 = ft_printf("La mia stringa e': %5s\n");
    if (num1 == num2)
        return (1);
    printf("Il suo numero e': %d\n", num1);
    printf("Il mio numero e': %d\n", num2);
    return (0);
}

int test_s_all()
{
    char    *str;
    int     num1;
    int     num2;

    str = "La roba mia rimane a me, e la tua diventa mia!\nSono malvagio :)";
    printf("Test_s_all\n");
    num1 = printf("La sua stringa e': %078.50*s\n", 59, str);
    num2 = ft_printf("La mia stringa e': %078.50*s\n", 59, str);
    if (num1 == num2)
        return (1);
    printf("Il suo numero e': %d\n", num1);
    printf("Il mio numero e': %d\n", num2);
    return (0);
}

int test_s_double()
{
    char    *str2;
    char    *str;
    int     num1;
    int     num2;

    str = "La roba mia rimane a me, e la tua diventa mia!\nSono malvagio :)";
    str2 = "Ciro";
    printf("Test_s_double\n");
    num1 = printf("La sua stringa e': %88s\n; ma tu come stai %0-*.8s\n",str, 59, str2);
    num2 = ft_printf("La mia stringa e': %88s\n; ma tu come stai %0-*.8s\n",str, 59, str2);
    if (num1 == num2)
        return (1);
    printf("Il suo numero e': %d\n", num1);
    printf("Il mio numero e': %d\n", num2);
    return (0);
}

int test_stringa()
{
    if (test_s() == 1)
		printf("Test_s:	\x1b[32m[OK]\x1b[0m\n");
	else
		printf("Test_s: \x1b[31m[KO]     Il tuo programma non stampa la stringa\x1b[0m\n");
    printf("\n");
    if (test_s_grandezza() == 1)
		printf("Test_s_grandezza: \x1b[32m[OK]\x1b[0m\n");
	else
		printf("Test_s_grandezza: \x1b[31m[KO]     Il tuo programma non gestisce la grandezza\x1b[0m\n");
    printf("\n");
    if (test_s_grandezza_minus() == 1)
		printf("Test_s_grandezza_minus: \x1b[32m[OK]\x1b[0m\n");
	else
		printf("Test_s_grandezza_minus: \x1b[31m[KO]     Il tuo programma non gestisce il meno\x1b[0m\n");
    printf("\n");
    if (test_s0() == 1)
		printf("Test_s0: \x1b[32m[OK]\x1b[0m\n");
	else
		printf("Test_s0: \x1b[31m[KO]     Il tuo programma non gestisce lo zero\x1b[0m\n");
    printf("\n");
    if (test_s0_minus() == 1)
		printf("Test_s0_minus: \x1b[32m[OK]\x1b[0m\n");
	else
		printf("Test_s0_minus: \x1b[31m[KO]     Il tuo programma non gestisce lo zero con il meno\x1b[0m\n");
    printf("\n");
    if (test_s_asterisco() == 1)
		printf("Test_s_atserisco: \x1b[32m[OK]\x1b[0m\n");
	else
		printf("Test_s_asterisco: \x1b[31m[KO]     Il tuo programma non gestisce l'estensione con l'*\x1b[0m\n");
    printf("\n");
    if (test_s_astenum() == 1)
		printf("Test_s_astenum: \x1b[32m[OK]\x1b[0m\n");
	else
		printf("Test_s_astenum: \x1b[31m[KO]     Il tuo programma non gestisce l'* e il numero insieme\x1b[0m\n");
    printf("\n");
    if (test_s_precision1() == 1)
		printf("Test_s_precision1: \x1b[32m[OK]\x1b[0m\n");
	else
		printf("Test_s_precision1: \x1b[31m[KO]     Il tuo programma non gestisce la precisione\x1b[0m\n");
    printf("\n");
    if (test_s_precision2() == 1)
		printf("Test_s_precision2: \x1b[32m[OK]\x1b[0m\n");
	else
		printf("Test_s_precision2: \x1b[31m[KO]     Il tuo programma non gestisce la precisione con l'*\x1b[0m\n");
    printf("\n");
    if (test_s_precision3() == 1)
		printf("Test_s_precision3: \x1b[32m[OK]\x1b[0m\n");
	else
		printf("Test_s_precision3: \x1b[31m[KO]     Il tuo programma non gestisce quando la precisione e' zero\x1b[0m\n");
    printf("\n");
    if (test_s_precision4() == 1)
		printf("Test_s_precision4: \x1b[32m[OK]\x1b[0m\n");
	else
		printf("Test_s_precision4: \x1b[31m[KO]     Il tuo programma non gestisce quando la precisione non ha input\x1b[0m\n");
    printf("\n");
    /*if (test_s_crisi() == 1)
		printf("Test_s_crisi: \x1b[32m[OK]\x1b[0m\n");
	else
		printf("Test_s_crisi: \x1b[31m[KO]     Il tuo programma non gestisce quando la precisione non ha input\x1b[0m\n");
    printf("\n");*/
    /*if (test_s_crisi2() == 1)
		printf("Test_s_crisi2: \x1b[32m[OK]\x1b[0m\n");
	else
		printf("Test_s_crisi2: \x1b[31m[KO]     Il tuo programma non gestisce quando la precisione non ha input\x1b[0m\n");
    printf("\n");*/
    if (test_s_all() == 1)
		printf("Test_s_all: \x1b[32m[OK]\x1b[0m\n");
	else
		printf("Test_s_all: \x1b[31m[KO]     Il tuo programma non gestisce tutte le cose insieme\x1b[0m\n");
    printf("\n");
    if (test_s_double() == 1)
		printf("Test_s_double: \x1b[32m[OK]\x1b[0m\n");
	else
		printf("Test_s_double: \x1b[31m[KO]     Il tuo programma non gestisce due stringhe\x1b[0m\n");
    return (1);
}