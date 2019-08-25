//#include "ft_printf.h"
#include <stdlib.h>

int         size(long nb, int base)
{
    int     len;

    len = 0;
    while (nb)
    {
        len++;
        nb /= base;
    }
    return (len);
}

char        *ft_itoa_base(unsigned int value, int base)
{
    char    *str;
    char    tab[] = "0123456789abcdef";
    int     i;
    long    nb;

    nb = value;
    i = size(nb, base);
    str = (char *)malloc(sizeof(char) * (i + 1));
    str[i--] = '\0';
    if (nb == 0)
    {
        str[0] = '0';
        return (str);
    }
    while (nb)
    {
        str[i] = tab[nb % base];
        nb = nb / base;
        i--;
    }
    return (str);
}
