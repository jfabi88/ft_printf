#include <stdio.h>
#include "ft_printf.h"

int test_d()
{
    int     printed;
    int     num1;
    int     num2;

    printed = 9;
    printf("Test_d\n");
    num1 = printf("Il suo numero e': %d\n", printed);
    num2 = ft_printf("Il mio numero e': %d\n", printed);
    if (num1 == num2)
        return (1);
    printf("Il suo numero e': %d\n", num1);
    printf("Il mio numero e': %d\n", num2);
    return (0);
}

int test_d1()
{
    int     printed;
    int     num1;
    int     num2;

    printed = -55;
    printf("Test_d1\n");
    num1 = printf("Il suo numero e': %d\n", printed);
    num2 = ft_printf("Il mio numero e': %d\n", printed);
    if (num1 == num2)
        return (1);
    printf("Il suo numero e': %d\n", num1);
    printf("Il mio numero e': %d\n", num2);
    return (0);
}

int test_d2()
{
    int     printed;
    int     num1;
    int     num2;

    printed = -55;
    printf("Test_d2\n");
    num1 = printf("Il suo numero e': %20d\n", printed);
    num2 = ft_printf("Il mio numero e': %20d\n", printed);
    if (num1 == num2)
        return (1);
    printf("Il suo numero e': %d\n", num1);
    printf("Il mio numero e': %d\n", num2);
    return (0);
}

int test_d3()
{
    int     printed;
    int     num1;
    int     num2;

    printed = -55;
    printf("Test_d3\n");
    num1 = printf("Il suo numero e': %020d\n", printed);
    num2 = ft_printf("Il mio numero e': %020d\n", printed);
    if (num1 == num2)
        return (1);
    printf("Il suo numero e': %d\n", num1);
    printf("Il mio numero e': %d\n", num2);
    return (0);
}

int test_d4()
{
    int     printed;
    int     num1;
    int     num2;

    printed = -55;
    printf("Test_d4\n");
    num1 = printf("Il suo numero e': %-020d\n", printed);
    num2 = ft_printf("Il mio numero e': %-020d\n", printed);
    if (num1 == num2)
        return (1);
    printf("Il suo numero e': %d\n", num1);
    printf("Il mio numero e': %d\n", num2);
    return (0);
}

int test_d5()
{
    int     printed;
    int     num1;
    int     num2;

    printed = -55;
    printf("Test_d5\n");
    num1 = printf("Il suo numero e': %-020.6d\n", printed);
    num2 = ft_printf("Il mio numero e': %-020.6d\n", printed);
    if (num1 == num2)
        return (1);
    printf("Il suo numero e': %d\n", num1);
    printf("Il mio numero e': %d\n", num2);
    return (0);
}

int test_d6()
{
    int     printed;
    int     num1;
    int     num2;

    printed = -55;
    printf("Test_d6\n");
    num1 = printf("Il suo numero e': %-20.90d\n", printed);
    num2 = ft_printf("Il mio numero e': %20.90d\n", printed);
    if (num1 == num2)
        return (1);
    printf("Il suo numero e': %d\n", num1);
    printf("Il mio numero e': %d\n", num2);
    return (0);
}

int test_d7()
{
    int     printed;
    int     num1;
    int     num2;

    printed = 2147483647;
    printf("Test_d7\n");
    num1 = printf("Il suo numero e': %d\n", printed);
    num2 = ft_printf("Il mio numero e': %d\n", printed);
    if (num1 == num2)
        return (1);
    printf("Il suo numero e': %d\n", num1);
    printf("Il mio numero e': %d\n", num2);
    return (0);
}

int test_d8()
{
    int     printed;
    int     num1;
    int     num2;

    printed = -2147483648;
    printf("Test_d8\n");
    num1 = printf("Il suo numero e': %d\n", printed);
    num2 = ft_printf("Il mio numero e': %d\n", printed);
    if (num1 == num2)
        return (1);
    printf("Il suo numero e': %d\n", num1);
    printf("Il mio numero e': %d\n", num2);
    return (0);
}

int test_d_precisione0()
{
    int     printed;
    int     num1;
    int     num2;

    printed = -214740;
    printf("Test_d_precisione0\n");
    num1 = printf("Il suo numero e': %*.d\n", 0, printed);
    num2 = ft_printf("Il mio numero e': %*.d\n", 0, printed);
    if (num1 == num2)
        return (1);
    printf("Il suo numero e': %d\n", num1);
    printf("Il mio numero e': %d\n", num2);
    return (0);
}

int test_d_grandezza0()
{
    int     printed;
    int     num1;
    int     num2;

    printed = -2147483648;
    printf("Test_d_grandezza0\n");
    num1 = printf("Il suo numero e': %*d\n", 0, printed);
    num2 = ft_printf("Il mio numero e': %*d\n", 0, printed);
    if (num1 == num2)
        return (1);
    printf("Il suo numero e': %d\n", num1);
    printf("Il mio numero e': %d\n", num2);
    return (0);
}

int test_d_grandezza0_precisione()
{
    int     printed;
    int     num1;
    int     num2;

    printed = -2147483648;
    printf("Test_d_grandezza0_precisione\n");
    num1 = printf("Il suo numero e': %*.30d\n", 0, printed);
    num2 = ft_printf("Il mio numero e': %*.30d\n", 0, printed);
    if (num1 == num2)
        return (1);
    printf("Il suo numero e': %d\n", num1);
    printf("Il mio numero e': %d\n", num2);
    return (0);
}

int test_d_grandezza0_precisione2()
{
    int     printed;
    int     num1;
    int     num2;

    printed = 21474836;
    printf("Test_d_grandezza0_precisione2\n");
    num1 = printf("Il suo numero e': %*.30d\n", 0, printed);
    num2 = ft_printf("Il mio numero e': %*.30d\n", 0, printed);
    if (num1 == num2)
        return (1);
    printf("Il suo numero e': %d\n", num1);
    printf("Il mio numero e': %d\n", num2);
    return (0);
}

int test_d_grandezza0_precisione3()
{
    int     printed;
    int     num1;
    int     num2;

    printed = 21474836;
    printf("Test_d_grandezza0_precisione3\n");
    num1 = printf("Il suo numero e': %-*.30d\n", 0, printed);
    num2 = ft_printf("Il mio numero e': %-*.30d\n", 0, printed);
    if (num1 == num2)
        return (1);
    printf("Il suo numero e': %d\n", num1);
    printf("Il mio numero e': %d\n", num2);
    return (0);
}

int test_d_grandezza_minus()
{
    int     printed;
    int     num1;
    int     num2;

    printed = 21474836;
    printf("Test_d_grandezza_minus\n");
    num1 = printf("Il suo numero e': %-*.30d\n", 55, printed);
    num2 = ft_printf("Il mio numero e': %-*.30d\n", 55, printed);
    if (num1 == num2)
        return (1);
    printf("Il suo numero e': %d\n", num1);
    printf("Il mio numero e': %d\n", num2);
    return (0);
}

int	test_intero()
{
	if (test_d() == 1)
		printf("Test_d:	\x1b[32m[OK]\x1b[0m\n");
	else
		printf("Test_d: \x1b[31m[KO]     Il tuo programma non stampa il numero\n");
	printf("\n");
    if (test_d1() == 1)
		printf("Test_d1:	\x1b[32m[OK]\x1b[0m\n");
	else
		printf("Test_d1: \x1b[31m[KO]     Il tuo programma non stampa il numero\n");
	printf("\n");
    if (test_d2() == 1)
		printf("Test_d2:	\x1b[32m[OK]\x1b[0m\n");
	else
		printf("Test_d2: \x1b[31m[KO]     Il tuo programma non stampa il numero\n");
	printf("\n");
    if (test_d3() == 1)
		printf("Test_d3:	\x1b[32m[OK]\x1b[0m\n");
	else
		printf("Test_d3: \x1b[31m[KO]     Il tuo programma non stampa il numero\n");
	printf("\n");
    if (test_d4() == 1)
		printf("Test_d4:	\x1b[32m[OK]\x1b[0m\n");
	else
		printf("Test_d4: \x1b[31m[KO]     Il tuo programma non stampa il numero\n");
	printf("\n");
    if (test_d5() == 1)
		printf("Test_d5:	\x1b[32m[OK]\x1b[0m\n");
	else
		printf("Test_d5: \x1b[31m[KO]     Il tuo programma non stampa il numero\n");
	printf("\n");
    if (test_d6() == 1)
		printf("Test_d6:	\x1b[32m[OK]\x1b[0m\n");
	else
		printf("Test_d6: \x1b[31m[KO]     Il tuo programma non stampa il numero\n");
	printf("\n");
    if (test_d7() == 1)
		printf("Test_d7:	\x1b[32m[OK]\x1b[0m\n");
	else
		printf("Test_d7: \x1b[31m[KO]     Il tuo programma non stampa il numero massimo\n");
	printf("\n");
    if (test_d8() == 1)
		printf("Test_d8:	\x1b[32m[OK]\x1b[0m\n");
	else
		printf("Test_d8: \x1b[31m[KO]     Il tuo programma non stampa il numero minimo\n");
	printf("\n");
    if (test_d_precisione0() == 1)
		printf("Test_d_precisione0:	\x1b[32m[OK]\x1b[0m\n");
	else
		printf("Test_d_precisione0: \x1b[31m[KO]     Il tuo programma non stampa il numero se la precisione è nulla\n");
	printf("\n");
    if (test_d_grandezza0() == 1)
		printf("Test_d_grandezza0:	\x1b[32m[OK]\x1b[0m\n");
	else
		printf("Test_d_grandezza0: \x1b[31m[KO]     Il tuo programma non stampa il numero se la grandezza è nulla\n");
	printf("\n");
    if (test_d_grandezza0_precisione() == 1)
		printf("Test_d_grandezza0_precisione:	\x1b[32m[OK]\x1b[0m\n");
	else
		printf("Test_d_grandezza0_precisione: \x1b[31m[KO]     Il tuo programma non stampa il numero se la grandezza è nulla e la precisione no\n");
	printf("\n");
    if (test_d_grandezza0_precisione2() == 1)
		printf("Test_d_grandezza0_precisione2:	\x1b[32m[OK]\x1b[0m\n");
	else
		printf("Test_d_grandezza0_precisione2: \x1b[31m[KO]     Il tuo programma non stampa il numero se la grandezza è nulla e la precisione no\n");
	printf("\n");
    if (test_d_grandezza0_precisione3() == 1)
		printf("Test_d_grandezza0_precisione3:	\x1b[32m[OK]\x1b[0m\n");
	else
		printf("Test_d_grandezza0_precisione3: \x1b[31m[KO]     Il tuo programma non stampa il numero se la grandezza è nulla e la precisione no\n");
	printf("\n");
    if (test_d_grandezza_minus() == 1)
		printf("Test_d_grandezza_minus:	\x1b[32m[OK]\x1b[0m\n");
	else
		printf("Test_d_grandezza_minus: \x1b[31m[KO]     Il tuo programma non stampa il numero con una grandezza e il meno\n");
	printf("\n");
    return (1);
}