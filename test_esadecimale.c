#include <stdio.h>
#include "ft_printf.h"

int test_x()
{
    int     printed;
    int     num1;
    int     num2;

    printed = 18;
    printf("Test_e\n");
    num1 = printf("Il suo numero e': %x\n", printed);
    num2 = ft_printf("Il mio numero e': %x\n", printed);
    if (num1 == num2)
        return (1);
    printf("Il suo numero e': %d\n", num1);
    printf("Il mio numero e': %d\n", num2);
    return (0);
}

int test_x_minus()
{
    int     printed;
    int     num1;
    int     num2;

    printed = 897;
    printf("Test_x_minus\n");
    num1 = printf("Il suo numero e': %-x\n", printed);
    num2 = ft_printf("Il mio numero e': %-x\n", printed);
    if (num1 == num2)
        return (1);
    printf("Il suo numero e': %d\n", num1);
    printf("Il mio numero e': %d\n", num2);
    return (0);
}

int test_x2()
{
    int     printed;
    int     num1;
    int     num2;

    printed = -55;
    printf("Test_x2\n");
    num1 = printf("Il suo numero e': %20x\n", printed);
    num2 = ft_printf("Il mio numero e': %20x\n", printed);
    if (num1 == num2)
        return (1);
    printf("Il suo numero e': %d\n", num1);
    printf("Il mio numero e': %d\n", num2);
    return (0);
}

int test_x3()
{
    int     printed;
    int     num1;
    int     num2;

    printed = -55;
    printf("Test_x3\n");
    num1 = printf("Il suo numero e': %020x\n", printed);
    num2 = ft_printf("Il mio numero e': %020x\n", printed);
    if (num1 == num2)
        return (1);
    printf("Il suo numero e': %d\n", num1);
    printf("Il mio numero e': %d\n", num2);
    return (0);
}

int test_x4()
{
    int     printed;
    int     num1;
    int     num2;

    printed = -55;
    printf("Test_x4\n");
    num1 = printf("Il suo numero e': %-020x\n", printed);
    num2 = ft_printf("Il mio numero e': %-020x\n", printed);
    if (num1 == num2)
        return (1);
    printf("Il suo numero e': %d\n", num1);
    printf("Il mio numero e': %d\n", num2);
    return (0);
}

int test_x5()
{
    int     printed;
    int     num1;
    int     num2;

    printed = -55;
    printf("Test_x5\n");
    num1 = printf("Il suo numero e': %-020.6x\n", printed);
    num2 = ft_printf("Il mio numero e': %-020.6x\n", printed);
    if (num1 == num2)
        return (1);
    printf("Il suo numero e': %d\n", num1);
    printf("Il mio numero e': %d\n", num2);
    return (0);
}

int test_x6()
{
    int     printed;
    int     num1;
    int     num2;

    printed = -55;
    printf("Test_x6\n");
    num1 = printf("Il suo numero e': %-20.90x\n", printed);
    num2 = ft_printf("Il mio numero e': %20.90x\n", printed);
    if (num1 == num2)
        return (1);
    printf("Il suo numero e': %d\n", num1);
    printf("Il mio numero e': %d\n", num2);
    return (0);
}

int test_x7()
{
    int     printed;
    int     num1;
    int     num2;

    printed = 2147483647;
    printf("Test_x7\n");
    num1 = printf("Il suo numero e': %x\n", printed);
    num2 = ft_printf("Il mio numero e': %x\n", printed);
    if (num1 == num2)
        return (1);
    printf("Il suo numero e': %d\n", num1);
    printf("Il mio numero e': %d\n", num2);
    return (0);
}

int test_x8()
{
    int     printed;
    int     num1;
    int     num2;

    printed = -2147483648;
    printf("Test_x8\n");
    num1 = printf("Il suo numero e': %x\n", printed);
    num2 = ft_printf("Il mio numero e': %x\n", printed);
    if (num1 == num2)
        return (1);
    printf("Il suo numero e': %d\n", num1);
    printf("Il mio numero e': %d\n", num2);
    return (0);
}

int test_x_precisione0()
{
    int     printed;
    int     num1;
    int     num2;

    printed = -214740;
    printf("Test_x_precisione0\n");
    num1 = printf("Il suo numero e': %*.x\n", 0, printed);
    num2 = ft_printf("Il mio numero e': %*.x\n", 0, printed);
    if (num1 == num2)
        return (1);
    printf("Il suo numero e': %d\n", num1);
    printf("Il mio numero e': %d\n", num2);
    return (0);
}

int test_x_grandezza0()
{
    int     printed;
    int     num1;
    int     num2;

    printed = -2147483648;
    printf("Test_x_grandezza0\n");
    num1 = printf("Il suo numero e': %*x\n", 0, printed);
    num2 = ft_printf("Il mio numero e': %*x\n", 0, printed);
    if (num1 == num2)
        return (1);
    printf("Il suo numero e': %d\n", num1);
    printf("Il mio numero e': %d\n", num2);
    return (0);
}

int test_x_grandezza0_precisione()
{
    int     printed;
    int     num1;
    int     num2;

    printed = -2147483648;
    printf("Test_x_grandezza0_precisione\n");
    num1 = printf("Il suo numero e': %*.30x\n", 0, printed);
    num2 = ft_printf("Il mio numero e': %*.30x\n", 0, printed);
    if (num1 == num2)
        return (1);
    printf("Il suo numero e': %d\n", num1);
    printf("Il mio numero e': %d\n", num2);
    return (0);
}

int test_x_grandezza0_precisione2()
{
    int     printed;
    int     num1;
    int     num2;

    printed = 21474836;
    printf("Test_d_grandezza0_precisione2\n");
    num1 = printf("Il suo numero e': %*.30x\n", 0, printed);
    num2 = ft_printf("Il mio numero e': %*.30x\n", 0, printed);
    if (num1 == num2)
        return (1);
    printf("Il suo numero e': %d\n", num1);
    printf("Il mio numero e': %d\n", num2);
    return (0);
}

int test_x_grandezza0_precisione3()
{
    int     printed;
    int     num1;
    int     num2;

    printed = 21474836;
    printf("Test_d_grandezza0_precisione3\n");
    num1 = printf("Il suo numero e': %-*.30x\n", 0, printed);
    num2 = ft_printf("Il mio numero e': %-*.30x\n", 0, printed);
    if (num1 == num2)
        return (1);
    printf("Il suo numero e': %d\n", num1);
    printf("Il mio numero e': %d\n", num2);
    return (0);
}

int test_x_grandezza_minus()
{
    int     printed;
    int     num1;
    int     num2;

    printed = 21474836;
    printf("Test_d_grandezza_minus\n");
    num1 = printf("Il suo numero e': %-*.30x\n", 55, printed);
    num2 = ft_printf("Il mio numero e': %-*.30x\n", 55, printed);
    if (num1 == num2)
        return (1);
    printf("Il suo numero e': %d\n", num1);
    printf("Il mio numero e': %d\n", num2);
    return (0);
}

int	test_esadecimale()
{
	if (test_x() == 1)
		printf("Test_x:	\x1b[32m[OK]\x1b[0m\n");
	else
		printf("Test_x: \x1b[31m[KO]     Il tuo programma non stampa il numero in esadecimale\n\x1b[0m");
	printf("\n");
    if (test_x_minus() == 1)
		printf("Test_x_minus:	\x1b[32m[OK]\x1b[0m\n");
	else
		printf("Test_x_minus: \x1b[31m[KO]     Il tuo programma non stampa il numero in esadecimale\n\x1b[0m");
	printf("\n");
    if (test_x2() == 1)
		printf("Test_x2:	\x1b[32m[OK]\x1b[0m\n");
	else
		printf("Test_x2: \x1b[31m[KO]     Il tuo programma non stampa il numero\n");
	printf("\n");
    if (test_x3() == 1)
		printf("Test_x3:	\x1b[32m[OK]\x1b[0m\n");
	else
		printf("Test_x3: \x1b[31m[KO]     Il tuo programma non stampa il numero\n");
	printf("\n");
    if (test_x4() == 1)
		printf("Test_x4:	\x1b[32m[OK]\x1b[0m\n");
	else
		printf("Test_x4: \x1b[31m[KO]     Il tuo programma non stampa il numero\n");
	printf("\n");
    if (test_x5() == 1)
		printf("Test_x5:	\x1b[32m[OK]\x1b[0m\n");
	else
		printf("Test_x5: \x1b[31m[KO]     Il tuo programma non stampa il numero\n");
	printf("\n");
    if (test_x6() == 1)
		printf("Test_x6:	\x1b[32m[OK]\x1b[0m\n");
	else
		printf("Test_x6: \x1b[31m[KO]     Il tuo programma non stampa il numero\n");
	printf("\n");
    if (test_x7() == 1)
		printf("Test_x7:	\x1b[32m[OK]\x1b[0m\n");
	else
		printf("Test_x7: \x1b[31m[KO]     Il tuo programma non stampa il numero massimo\n");
	printf("\n");
    if (test_x8() == 1)
		printf("Test_x8:	\x1b[32m[OK]\x1b[0m\n");
	else
		printf("Test_x8: \x1b[31m[KO]     Il tuo programma non stampa il numero minimo\n");
	printf("\n");
    if (test_x_precisione0() == 1)
		printf("Test_x_precisione0:	\x1b[32m[OK]\x1b[0m\n");
	else
		printf("Test_x_precisione0: \x1b[31m[KO]     Il tuo programma non stampa il numero se la precisione è nulla\n");
	printf("\n");
    if (test_x_grandezza0() == 1)
		printf("Test_x_grandezza0:	\x1b[32m[OK]\x1b[0m\n");
	else
		printf("Test_x_grandezza0: \x1b[31m[KO]     Il tuo programma non stampa il numero se la grandezza è nulla\n");
	printf("\n");
    if (test_x_grandezza0_precisione() == 1)
		printf("Test_x_grandezza0_precisione:	\x1b[32m[OK]\x1b[0m\n");
	else
		printf("Test_x_grandezza0_precisione: \x1b[31m[KO]     Il tuo programma non stampa il numero se la grandezza è nulla e la precisione no\n");
	printf("\n");
    if (test_x_grandezza0_precisione2() == 1)
		printf("Test_x_grandezza0_precisione2:	\x1b[32m[OK]\x1b[0m\n");
	else
		printf("Test_x_grandezza0_precisione2: \x1b[31m[KO]     Il tuo programma non stampa il numero se la grandezza è nulla e la precisione no\n");
	printf("\n");
    if (test_x_grandezza0_precisione3() == 1)
		printf("Test_x_grandezza0_precisione3:	\x1b[32m[OK]\x1b[0m\n");
	else
		printf("Test_x_grandezza0_precisione3: \x1b[31m[KO]     Il tuo programma non stampa il numero se la grandezza è nulla e la precisione no\n");
	printf("\n");
    if (test_x_grandezza_minus() == 1)
		printf("Test_x_grandezza_minus:	\x1b[32m[OK]\x1b[0m\n");
	else
		printf("Test_x_grandezza_minus: \x1b[31m[KO]     Il tuo programma non stampa il numero con una grandezza e il meno\n");
	printf("\n");
    return (1);
}