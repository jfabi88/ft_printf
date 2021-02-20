#include "ft_printf.h"
#include <stdio.h>

int	ft_printf(const char *input, ...)
{
	char	*ciao;
	va_list	vl;
	int		i;
	int		j;
	int		z;

	i = 0;
	j = 0;
	va_start(vl, input);
	while (input[i] != 0)
	{
		if (input[i] == '%' && input[i - 1] != '\\')
		{
			i++;
			j += controllo(input + i, vl);
			while (input[i] && isconv(input[i - 1]) == 0)
				i++;
		}
		else
		{
			j++;
			write(1, &input[i], 1);
			i++;
		}
	}
	va_end(vl);
	return (j);
}
