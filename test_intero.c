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
    printf("Test_d5\n");
    num1 = printf("Il suo numero e': %-20.3d\n", printed);
    num2 = ft_printf("Il mio numero e': %20.90d\n", printed);
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
    return (1);
}