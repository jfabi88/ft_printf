int test_p()
{
    char    *str;
    int     num1;
    int     num2;

    str = "rosso mal palo";
    num1 = printf("Il puntatore della stringa e': %p\n", str);
    num2 = ft_printf("Il puntatore della stringa e': %p\n", str);
    if (num1 == num2)
        return (1);
    printf("Il suo numero e': %d\n", num1);
    printf("Il mio numero e': %d\n", num2);
    return (0);
}

int test_p2()
{
    char    *str;
    int     num1;
    int     num2;

    printf("test_p2\n");
    str = "rosso mal palo";
    num1 = printf("Il puntatore della stringa e': %20p\n", str);
    num2 = ft_printf("Il puntatore della stringa e': %20p\n", str);
    if (num1 == num2)
        return (1);
    printf("Il suo numero e': %d\n", num1);
    printf("Il mio numero e': %d\n", num2);
    return (0);
}

int test_p3()
{
    char    *str;
    int     num1;
    int     num2;

    printf("test_p3\n");
    str = "rosso mal palo";
    num1 = printf("Il puntatore della stringa e': %020p\n", str);
    num2 = ft_printf("Il puntatore della stringa e': %020p\n", str);
    if (num1 == num2)
        return (1);
    printf("Il suo numero e': %d\n", num1);
    printf("Il mio numero e': %d\n", num2);
    return (0);
}

int test_p4()
{
    char    *str;
    int     num1;
    int     num2;

    printf("test_p4\n");
    str = "rosso mal palo";
    num1 = printf("Il puntatore della stringa e': %050.9p\n", str);
    num2 = ft_printf("Il puntatore della stringa e': %050.9p\n", str);
    if (num1 == num2)
        return (1);
    printf("Il suo numero e': %d\n", num1);
    printf("Il mio numero e': %d\n", num2);
    return (0);
}

int test_p4_2()
{
    char    *str;
    int     num1;
    int     num2;

    printf("test_p4_2\n");
    str = "rosso mal palo";
    num1 = printf("Il puntatore della stringa e': %-50.13p\n", str);
    num2 = ft_printf("Il puntatore della stringa e': %-50.13p\n", str);
    if (num1 == num2)
        return (1);
    printf("Il suo numero e': %d\n", num1);
    printf("Il mio numero e': %d\n", num2);
    return (0);
}

int test_p5()
{
    char    *str;
    int     num1;
    int     num2;

    printf("test_p5\n");
    str = "rosso mal palo";
    num1 = printf("Il puntatore della stringa e': %20.50p\n", str);
    num2 = ft_printf("Il puntatore della stringa e': %20.50p\n", str);
    if (num1 == num2)
        return (1);
    printf("Il suo numero e': %d\n", num1);
    printf("Il mio numero e': %d\n", num2);
    return (0);
}

int test_p5_2()
{
    char    *str;
    int     num1;
    int     num2;

    printf("test_p5_2\n");
    str = "rosso mal palo";
    num1 = printf("Il puntatore della stringa e': %-20.50p\n", str);
    num2 = ft_printf("Il puntatore della stringa e': %-20.50p\n", str);
    if (num1 == num2)
        return (1);
    printf("Il suo numero e': %d\n", num1);
    printf("Il mio numero e': %d\n", num2);
    return (0);
}

int test_p6()
{
    char    *str;
    int     num1;
    int     num2;

    printf("test_p6\n");
    str = "rosso mal palo";
    num1 = printf("Il puntatore della stringa e': %*0.20p\n", 4, str);
    num2 = ft_printf("Il puntatore della stringa e': %*0.20p\n", 4, str);
    if (num1 == num2)
        return (1);
    printf("Il suo numero e': %d\n", num1);
    printf("Il mio numero e': %d\n", num2);
    return (0);
}

int test_puntatore()
{
    if (test_p() == 1)
		printf("Test_p:	\x1b[32m[OK]\x1b[0m\n");
	else
		printf("Test_p: \x1b[31m[KO]     Il tuo programma non stampa i puntatori\x1b[0m\n");
    printf("\n");
    if (test_p2() == 1)
		printf("Test_p2:	\x1b[32m[OK]\x1b[0m\n");
	else
		printf("Test_p2: \x1b[31m[KO]     Il tuo programma non gestisce la precisione\x1b[0m\n");
    printf("\n");
    if (test_p3() == 1)
		printf("Test_p3:	\x1b[32m[OK]\x1b[0m\n");
	else
		printf("Test_p3: \x1b[31m[KO]     Il tuo programma non gestisce la precisione\x1b[0m\n");
    printf("\n");
    if (test_p4() == 1)
		printf("Test_p3:	\x1b[32m[OK]\x1b[0m\n");
	else
		printf("Test_p3: \x1b[31m[KO]     Il tuo programma non gestisce la precisione\x1b[0m\n");
    printf("\n");
    if (test_p4_2() == 1)
		printf("Test_p3:	\x1b[32m[OK]\x1b[0m\n");
	else
		printf("Test_p3: \x1b[31m[KO]     Il tuo programma non gestisce la precisione\x1b[0m\n");
    printf("\n");
    if (test_p5() == 1)
		printf("Test_p3:	\x1b[32m[OK]\x1b[0m\n");
	else
		printf("Test_p3: \x1b[31m[KO]     Il tuo programma non gestisce la precisione\x1b[0m\n");
    printf("\n");
    if (test_p5_2() == 1)
		printf("Test_p3:	\x1b[32m[OK]\x1b[0m\n");
	else
		printf("Test_p3: \x1b[31m[KO]     Il tuo programma non gestisce la precisione\x1b[0m\n");
    printf("\n");
    if (test_p6() == 1)
		printf("Test_p3:	\x1b[32m[OK]\x1b[0m\n");
	else
		printf("Test_p3: \x1b[31m[KO]     Il tuo programma non gestisce la precisione\x1b[0m\n");
    printf("\n");
    return (1);
}