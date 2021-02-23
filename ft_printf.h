#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

int	controllo(char *input, va_list args);
int carattere(va_list args, char *flag, int width);
int stringa(va_list args ,char *flag, int width, int precisione);
int isconv(char c);
int	ft_isdigit(int c);
int	ft_strlen(const char *s);
int	ft_printf(const char *input, ...);
int intero(va_list args ,char *flag, int width, int precisione);
int nonsegnato(va_list args ,char *flag, int width, int precisione);
int esadecimale(va_list args ,char *flag, int width, int precisione);
int esadecimalebig(va_list args ,char *flag, int width, int precisione);
int puntatore(va_list args ,char *flag, int width, int precisione);
char    *dtoesa(long int num);
char    *dtoesabig(long int num);
char	*ft_utoa(unsigned int n);
char	*ft_strchr(const char *s, int c);
char	*ft_strdup(const char *s1);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);

#endif
