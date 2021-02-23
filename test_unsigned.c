#include "test.h"
#include "ft_printf.h"

int test_u()
{
    unsigned int     printed;
    int     num1;
    int     num2;

    printed = -21474836481;
    printf("Test_u\n");
    num1 = printf("Il suo numero e': %.0u\n", printed);
    num2 = ft_printf("Il mio numero e': %.0u\n", printed);
    if (num1 == num2)
        return (1);
    printf("Il suo numero e': %d\n", num1);
    printf("Il mio numero e': %d\n", num2);
    return (0);
}

int test_u1()
{
    unsigned int     printed;
    int     num1;
    int     num2;

    printed = -55;
    printf("Test_u1\n");
    num1 = printf("Il suo numero e': %u\n", printed);
    num2 = ft_printf("Il mio numero e': %u\n", printed);
    if (num1 == num2)
        return (1);
    printf("Il suo numero e': %d\n", num1);
    printf("Il mio numero e': %d\n", num2);
    return (0);
}

int test_u2()
{
    unsigned int     printed;
    int     num1;
    int     num2;

    printed = 678493021;
    printf("Test_u2\n");
    num1 = printf("Il suo numero e': %20u\n", printed);
    num2 = ft_printf("Il mio numero e': %20u\n", printed);
    if (num1 == num2)
        return (1);
    printf("Il suo numero e': %d\n", num1);
    printf("Il mio numero e': %d\n", num2);
    return (0);
}

int test_u3()
{
    unsigned int     printed;
    int     num1;
    int     num2;

    printed = -55;
    printf("Test_u3\n");
    num1 = printf("Il suo numero e': %020u\n", printed);
    num2 = ft_printf("Il mio numero e': %020u\n", printed);
    if (num1 == num2)
        return (1);
    printf("Il suo numero e': %d\n", num1);
    printf("Il mio numero e': %d\n", num2);
    return (0);
}

int test_u4()
{
    unsigned int     printed;
    int     num1;
    int     num2;

    printed = -55;
    printf("Test_u4\n");
    num1 = printf("Il suo numero e': %-020u\n", printed);
    num2 = ft_printf("Il mio numero e': %-020u\n", printed);
    if (num1 == num2)
        return (1);
    printf("Il suo numero e': %d\n", num1);
    printf("Il mio numero e': %d\n", num2);
    return (0);
}

int test_u5()
{
    unsigned int     printed;
    int     num1;
    int     num2;

    printed = -888865321;
    printf("Test_u5\n");
    num1 = printf("Il suo numero e': %-020.6u\n", printed);
    num2 = ft_printf("Il mio numero e': %-020.6u\n", printed);
    if (num1 == num2)
        return (1);
    printf("Il suo numero e': %d\n", num1);
    printf("Il mio numero e': %d\n", num2);
    return (0);
}

int test_u6()
{
    unsigned int     printed;
    int     num1;
    int     num2;

    printed = -55;
    printf("Test_u6\n");
    num1 = printf("Il suo numero e': %-20.90u\n", printed);
    num2 = ft_printf("Il mio numero e': %20.90u\n", printed);
    if (num1 == num2)
        return (1);
    printf("Il suo numero e': %d\n", num1);
    printf("Il mio numero e': %d\n", num2);
    return (0);
}

int test_u7()
{
    unsigned int     printed;
    int     num1;
    int     num2;

    printed = 2147483647;
    printf("Test_u7\n");
    num1 = printf("Il suo numero e': %u\n", printed);
    num2 = ft_printf("Il mio numero e': %u\n", printed);
    if (num1 == num2)
        return (1);
    printf("Il suo numero e': %d\n", num1);
    printf("Il mio numero e': %d\n", num2);
    return (0);
}

int test_u8()
{
    unsigned int     printed;
    int     num1;
    int     num2;

    printed = -2147483648;
    printf("Test_u8\n");
    num1 = printf("Il suo numero e': %u\n", printed);
    num2 = ft_printf("Il mio numero e': %u\n", printed);
    if (num1 == num2)
        return (1);
    printf("Il suo numero e': %d\n", num1);
    printf("Il mio numero e': %d\n", num2);
    return (0);
}

int test_u_precisione0()
{
    unsigned int     printed;
    int     num1;
    int     num2;

    printed = -214740;
    printf("Test_u_precisione0\n");
    num1 = printf("Il suo numero e': %*.u\n", 0, printed);
    num2 = ft_printf("Il mio numero e': %*.u\n", 0, printed);
    if (num1 == num2)
        return (1);
    printf("Il suo numero e': %d\n", num1);
    printf("Il mio numero e': %d\n", num2);
    return (0);
}

int test_u_grandezza0()
{
    unsigned int     printed;
    int     num1;
    int     num2;

    printed = -2147483648;
    printf("Test_u_grandezza0\n");
    num1 = printf("Il suo numero e': %*u\n", 0, printed);
    num2 = ft_printf("Il mio numero e': %*u\n", 0, printed);
    if (num1 == num2)
        return (1);
    printf("Il suo numero e': %d\n", num1);
    printf("Il mio numero e': %d\n", num2);
    return (0);
}

int test_u_grandezza0_precisione()
{
    unsigned int     printed;
    int     num1;
    int     num2;

    printed = -2147483648;
    printf("Test_u_grandezza0_precisione\n");
    num1 = printf("Il suo numero e': %*.30u\n", 0, printed);
    num2 = ft_printf("Il mio numero e': %*.30u\n", 0, printed);
    if (num1 == num2)
        return (1);
    printf("Il suo numero e': %d\n", num1);
    printf("Il mio numero e': %d\n", num2);
    return (0);
}

int test_u_grandezza0_precisione2()
{
    unsigned int     printed;
    int     num1;
    int     num2;

    printed = 21474836;
    printf("Test_u_grandezza0_precisione2\n");
    num1 = printf("Il suo numero e': %*.30u\n", 0, printed);
    num2 = ft_printf("Il mio numero e': %*.30u\n", 0, printed);
    if (num1 == num2)
        return (1);
    printf("Il suo numero e': %d\n", num1);
    printf("Il mio numero e': %d\n", num2);
    return (0);
}

int test_u_grandezza0_precisione3()
{
    unsigned int     printed;
    int     num1;
    int     num2;

    printed = 21474836;
    printf("Test_u_grandezza0_precisione3\n");
    num1 = printf("Il suo numero e': %-*.30u\n", 0, printed);
    num2 = ft_printf("Il mio numero e': %-*.30u\n", 0, printed);
    if (num1 == num2)
        return (1);
    printf("Il suo numero e': %d\n", num1);
    printf("Il mio numero e': %d\n", num2);
    return (0);
}

int test_u_grandezza_minus()
{
    int     printed;
    int     num1;
    int     num2;

    printed = 21474836;
    printf("Test_u_grandezza_minus\n");
    num1 = printf("Il suo numero e': %-*.30u\n", 55, printed);
    num2 = ft_printf("Il mio numero e': %-*.30u\n", 55, printed);
    if (num1 == num2)
        return (1);
    printf("Il suo numero e': %d\n", num1);
    printf("Il mio numero e': %d\n", num2);
    return (0);
}
int test_unsigned()
{
    if (test_u() == 1)
		printf("Test_u: \x1b[32m[OK]\x1b[0m\n");
	else
		printf("Test_u: \x1b[31m[KO]     Il tuo programma non gestisce due stringhe\x1b[0m\n");
    printf("\n");
    if (test_u1() == 1)
		printf("Test_u1:	\x1b[32m[OK]\x1b[0m\n");
	else
		printf("Test_u1: \x1b[31m[KO]     Il tuo programma non stampa il numero\n");
	printf("\n");
    if (test_u2() == 1)
		printf("Test_u2:	\x1b[32m[OK]\x1b[0m\n");
	else
		printf("Test_u2: \x1b[31m[KO]     Il tuo programma non stampa il numero\n");
	printf("\n");
    if (test_u3() == 1)
		printf("Test_u3:	\x1b[32m[OK]\x1b[0m\n");
	else
		printf("Test_u3: \x1b[31m[KO]     Il tuo programma non stampa il numero\n");
	printf("\n");
    if (test_u4() == 1)
		printf("Test_u4:	\x1b[32m[OK]\x1b[0m\n");
	else
		printf("Test_u4: \x1b[31m[KO]     Il tuo programma non stampa il numero\n");
	printf("\n");
    if (test_u5() == 1)
		printf("Test_u5:	\x1b[32m[OK]\x1b[0m\n");
	else
		printf("Test_u5: \x1b[31m[KO]     Il tuo programma non stampa il numero\n");
	printf("\n");
    if (test_u6() == 1)
		printf("Test_u6:	\x1b[32m[OK]\x1b[0m\n");
	else
		printf("Test_u6: \x1b[31m[KO]     Il tuo programma non stampa il numero\n");
	printf("\n");
    if (test_u7() == 1)
		printf("Test_u7:	\x1b[32m[OK]\x1b[0m\n");
	else
		printf("Test_u7: \x1b[31m[KO]     Il tuo programma non stampa il numero massimo\n");
	printf("\n");
    if (test_u8() == 1)
		printf("Test_u8:	\x1b[32m[OK]\x1b[0m\n");
	else
		printf("Test_u8: \x1b[31m[KO]     Il tuo programma non stampa il numero minimo\n");
	printf("\n");
    if (test_u_precisione0() == 1)
		printf("Test_u_precisione0:	\x1b[32m[OK]\x1b[0m\n");
	else
		printf("Test_u_precisione0: \x1b[31m[KO]     Il tuo programma non stampa il numero se la precisione è nulla\n");
	printf("\n");
    if (test_u_grandezza0() == 1)
		printf("Test_u_grandezza0:	\x1b[32m[OK]\x1b[0m\n");
	else
		printf("Test_u_grandezza0: \x1b[31m[KO]     Il tuo programma non stampa il numero se la grandezza è nulla\n");
	printf("\n");
    if (test_u_grandezza0_precisione() == 1)
		printf("Test_u_grandezza0_precisione:	\x1b[32m[OK]\x1b[0m\n");
	else
		printf("Test_u_grandezza0_precisione: \x1b[31m[KO]     Il tuo programma non stampa il numero se la grandezza è nulla e la precisione no\n");
	printf("\n");
    if (test_u_grandezza0_precisione2() == 1)
		printf("Test_u_grandezza0_precisione2:	\x1b[32m[OK]\x1b[0m\n");
	else
		printf("Test_u_grandezza0_precisione2: \x1b[31m[KO]     Il tuo programma non stampa il numero se la grandezza è nulla e la precisione no\n");
	printf("\n");
    if (test_u_grandezza0_precisione3() == 1)
		printf("Test_u_grandezza0_precisione3:	\x1b[32m[OK]\x1b[0m\n");
	else
		printf("Test_u_grandezza0_precisione3: \x1b[31m[KO]     Il tuo programma non stampa il numero se la grandezza è nulla e la precisione no\n");
	printf("\n");
    if (test_u_grandezza_minus() == 1)
		printf("Test_u_grandezza_minus:	\x1b[32m[OK]\x1b[0m\n");
	else
		printf("Test_u_grandezza_minus: \x1b[31m[KO]     Il tuo programma non stampa il numero con una grandezza e il meno\n");
	printf("\n");
    return (1);
}