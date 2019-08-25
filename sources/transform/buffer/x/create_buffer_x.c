#include "ft_printf.h"
#include <stdlib.h>

char        *create_buffer_x(t_printf *pf)
{
    char    *buffer;
    int     size;

    size = pf->number_of_signs;
    if (pf->width.exist && (pf->width.width > size))
        size = pf->width.width;
    if (pf->precision.precision && pf->precision.precision > size)
        size = pf->precision.precision;
    buffer = (char *)malloc(sizeof(char) * (size + 1));
    ft_memset(buffer, '1', size);
    buffer[size] = '\0';
    return (buffer);
}
