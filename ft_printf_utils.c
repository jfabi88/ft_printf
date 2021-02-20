#include <string.h>
#include "ft_printf.h"

int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (src == 0)
		return (0);
	if (size != 0)
	{
		while (i < (size - 1) && src[i] != 0)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = 0;
	}
	return (ft_strlen(src));
}

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*ret;

	i = ft_strlen(s1) + 1;
	ret = (char *)malloc(i * sizeof(char));
	if (ret == 0)
		return (0);
	ft_strlcpy(ret, s1, i);
	return (ret);
}

int isconv(char c)
{
    if (c == 'c')
        return (1);
    if (c == 's')
        return (1);
    if (c == 'p')
        return (1);
    if (c == 'd')
        return (1);
    if (c == 'i')
        return (1);
    if (c == 'u')
        return (1);
    if (c == 'x')
        return (1);
    if (c == 'X')
        return (1);
    return (0);
}

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (unsigned char)c)
			return ((char *)(s + i));
		i++;
	}
	if (s[i] == c)
		return ((char *)(s + i));
	return (0);
}