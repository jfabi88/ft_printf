#include <stdio.h>
#include "ft_printf.h"

int	test_c()
{
	char	p;
	int		num1;
	int		num2;

	printf("Test_c\n");
	p = 'o';
	num1 = printf("Il suo carattere e': %c\n", p);
	num2 = ft_printf("Il mio carattere e': %c\n", p);
	if (num1 == num2)
		return (1);
	printf("Il suo numero e': %d\n", num1);
	printf("Il mio numero e': %d\n", num2);
	return (0);	
}

int	test_c1()
{
	char	p;
	int		num1;
	int		num2;

	printf("Test_c1\n");
	p = 'w';
	num1 = printf("Il suo carattere e': %5c\n", p);
	num2 = ft_printf("Il mio carattere e': %5c\n", p);
	if (num1 == num2)
		return (1);
	printf("Il suo numero e': %d\n", num1);
	printf("Il mio numero e': %d\n", num2);
	return (0);
}

int	test_c_w0()
{
	char	p;
	int		num1;
	int		num2;

	p = 'w';
	printf("Test_c_w0\n");
	num1 = printf("Il suo carattere e': %05c\n", p);
	num2 = ft_printf("Il mio carattere e': %05c\n", p);
	if (num1 == num2)
		return (1);
	printf("Il suo numero e': %d\n", num1);
	printf("Il mio numero e': %d\n", num2);
	return (0);
}

int	test_c_w0_wminus()
{
	char	p;
	int		num1;
	int		num2;

	printf("Test_c_w0_wminus\n");
	p = 'w';
	num1 = printf("Il suo carattere e': %-05c\n", p);
	num2 = ft_printf("Il mio carattere e': %-05c\n", p);
	if (num1 == num2)
		return (1);
	printf("Il suo numero e': %d\n", num1);
	printf("Il mio numero e': %d\n", num2);
	return (0);
}

int	test_c_asterisco()
{
	char	p;
	int		num1;
	int		num2;

	printf("Test_c_asterisco\n");
	p = 'w';
	num1 = printf("Il suo carattere e': %*c\n", 20, p);
	num2 = ft_printf("Il mio carattere e': %*c\n", 20, p);
	if (num1 == num2)
		return (1);
	printf("Il suo numero e': %d\n", num1);
	printf("Il mio numero e': %d\n", num2);
	return (0);
}

int	test_c_astenumero1()
{
	char	p;
	int		num1;
	int		num2;

	printf("Test_c_astenumero1\n");
	p = 'w';
	num1 = printf("Il suo carattere e': %*43c\n", 20, p);
	num2 = ft_printf("Il mio carattere e': %*43c\n", 20, p);
	if (num1 == num2)
		return (1);
	printf("Il suo numero e': %d\n", num1);
	printf("Il mio numero e': %d\n", num2);
	return (0);
}

int	test_c_astenumero2()
{
	char	p;
	int		num1;
	int		num2;

	printf("Test_c_astenumero2\n");
	p = 'w';
	num1 = printf("Il suo carattere e': %*5c\n", 20, p);
	num2 = ft_printf("Il mio carattere e': %*5c\n", 20, p);
	if (num1 == num2)
		return (1);
	printf("Il suo numero e': %d\n", num1);
	printf("Il mio numero e': %d\n", num2);
	return (0);
}

int	test_c_astenumero3()
{
	char	p;
	int		num1;
	int		num2;

	printf("Test_c_astenumero3\n");
	p = 'w';
	num1 = printf("Il suo carattere e': %*43c\n", 0, p);
	num2 = ft_printf("Il mio carattere e': %*43c\n", 0, p);
	if (num1 == num2)
		return (1);
	printf("Il suo numero e': %d\n", num1);
	printf("Il mio numero e': %d\n", num2);
	return (0);
}

int	test_c_astenumero0()
{
	char	p;
	int		num1;
	int		num2;

	printf("Test_c_astenumero0\n");
	p = 'w';
	num1 = printf("Il suo carattere e': %*043c\n", 0, p);
	num2 = ft_printf("Il mio carattere e': %*043c\n", 0, p);
	if (num1 == num2)
		return (1);
	printf("Il suo numero e': %d\n", num1);
	printf("Il mio numero e': %d\n", num2);
	return (0);
}

int	test_c_punto()
{
	char	p;
	int		num1;
	int		num2;

	printf("Test_c_punto\n");
	p = 'w';
	num1 = printf("Il suo carattere e': %.43c\n", p);
	num2 = ft_printf("Il mio carattere e': %.43c\n", p);
	if (num1 == num2)
		return (1);
	printf("Il suo numero e': %d\n", num1);
	printf("Il mio numero e': %d\n", num2);
	return (0);
}

int	test_c_all()
{
	char	p;
	int		num1;
	int		num2;

	printf("Test_c_all\n");
	p = 'w';
	num1 = printf("Il suo carattere e': %0.43*24-c\n", 8,p);
	num2 = ft_printf("Il mio carattere e': %0.43*24-c\n", 8,p);
	if (num1 == num2)
		return (1);
	printf("Il suo numero e': %d\n", num1);
	printf("Il mio numero e': %d\n", num2);
	return (0);
}

int	test_c_all_nominus()
{
	char	p;
	int		num1;
	int		num2;

	printf("Test_c_all_nominus\n");
	p = 'w';
	num1 = printf("Il suo carattere e': %0.43*24c\n", 8,p);
	num2 = ft_printf("Il mio carattere e': %0.43*24c\n", 8,p);
	if (num1 == num2)
		return (1);
	printf("Il suo numero e': %d\n", num1);
	printf("Il mio numero e': %d\n", num2);
	return (0);
}

int	test_c_after()
{
	char	p;
	int		num1;
	int		num2;

	printf("Test_c_after\n");
	p = 'w';
	num1 = printf("Il suo carattere e': %0.43*24c passo e chiudo\n", 8,p);
	num2 = ft_printf("Il mio carattere e': %0.43*24c passo e chiudo\n", 8,p);
	if (num1 == num2)
		return (1);
	printf("Il suo numero e': %d\n", num1);
	printf("Il mio numero e': %d\n", num2);
	return (0);
}

int	test_c_double_c()
{
	char	p;
	char	t;
	int		num1;
	int		num2;

	printf("Test_c_double_c\n");
	p = 'w';
	t = 'z';
	num1 = printf("Il suo carattere e' %0.43*24c ed il suo secondo carattere e' %0.4*78c\n", 8, p, 34, t);
	num2 = ft_printf("Il mio carattere e' %0.43*24c ed il mio secondo carattere e' %0.4*78c\n", 8, p, 34, t);
	if (num1 == num2)
		return (1);
	printf("Il suo numero e': %d\n", num1);
	printf("Il mio numero e': %d\n", num2);
	return (0);
}

int	test_carattere()
{
	if (test_c() == 1)
		printf("Test_c:	\x1b[32m[OK]\x1b[0m\n");
	else
		printf("Test_c: \x1b[31m[KO]     Il tuo programma non stampa il carattere\n");
	printf("\n");
	if (test_c1() == 1)
		printf("Test_c1: \x1b[32m[OK]\x1b[0m\n");
	else
		printf("Test_c1: \x1b[31m[KO]      Il tuo programma non gestisce l'estensione\n\x1b[0m");
	printf("\n");
	if (test_c_w0() == 1)
		printf("Test_c_w0: \x1b[32m[OK]\x1b[0m\n");
	else
		printf("Test_c_w0: \x1b[31m[KO]     Il tuo programma non gestisce lo zero\x1b[0m\n");
	printf("\n");
	if (test_c_w0_wminus() == 1)
		printf("Test_c_w0_minus: \x1b[32m[OK]\x1b[0m\n");
	else
		printf("Test_c_w0_minus: \x1b[31m[KO]     Il tuo programma non gestisce lo zero e il meno insieme\x1b[0m\n");
	printf("\n");
	if (test_c_asterisco() == 1)
		printf("Test_c_asterisco: \x1b[32m[OK]\x1b[0m\n");
	else
		printf("Test_c_asterisco: \x1b[31m[KO]     Il tuo programma non gestisce l'asterisco\x1b[0m\n");
	printf("\n");
	if (test_c_astenumero1() == 1)
		printf("Test_c_astenumero1: \x1b[32m[OK]\x1b[0m\n");
	else
		printf("Test_c_astenumero1: \x1b[31m[KO]     Il tuo programma non gestisce l'asterisco e un numero insieme\x1b[0m\n");
	printf("\n");
	if (test_c_astenumero2() == 1)
		printf("Test_c_astenumero2: \x1b[32m[OK]\x1b[0m\n");
	else
		printf("Test_c_astenumero2: \x1b[31m[KO]     Il tuo programma non gestisce l'asterisco e un numero insieme\x1b[0m\n");
	printf("\n");
	if (test_c_astenumero3() == 1)
		printf("Test_c_astenumero3: \x1b[32m[OK]\x1b[0m\n");
	else
		printf("Test_c_astenumero3: \x1b[31m[KO]     Il tuo programma non gestisce l'asterisco e un numero insieme\x1b[0m\n");
	printf("\n");
	if (test_c_astenumero0() == 1)
		printf("Test_c_astenumero0: \x1b[32m[OK]\x1b[0m\n");
	else
		printf("Test_c_astenumero0: \x1b[31m[KO]     Il tuo programma non gestisce l'asterisco e un numero insieme con uno zero davanti\x1b[0m\n");
	printf("\n");
	if (test_c_punto() == 1)
		printf("Test_c_punto: \x1b[32m[OK]\x1b[0m\n");
	else
		printf("Test_c_punto: \x1b[31m[KO]     Il tuo programma non gestisce il punto\x1b[0m\n");
	printf("\n");
	if (test_c_all() == 1)
		printf("Test_c_all: \x1b[32m[OK]\x1b[0m\n");
	else
		printf("Test_c_all: \x1b[31m[KO]     Il tuo programma non gestisce tutti i flag insieme\x1b[0m\n");
	printf("\n");
	if (test_c_all_nominus() == 1)
		printf("Test_c_all_nominus: \x1b[32m[OK]\x1b[0m\n");
	else
		printf("Test_c_all_nominus: \x1b[31m[KO]     Il tuo programma non gestisce tutti i flag insieme (no meno)\x1b[0m\n");
	printf("\n");
	if (test_c_after() == 1)
		printf("Test_c_after: \x1b[32m[OK]\x1b[0m\n");
	else
		printf("Test_c_after: \x1b[31m[KO]     Il tuo programma non gestisce le lettere dopo la variabile\x1b[0m\n");
	printf("\n");
	if (test_c_double_c() == 1)
		printf("Test_c_double_c: \x1b[32m[OK]\x1b[0m\n");
	else
		printf("Test_c_double_c: \x1b[31m[KO]     Il tuo programma non gestisce un doppio carattere\x1b[0m\n");
	return (1);
}
