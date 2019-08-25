#include "ft_printf.h"

int         add_width_to_buffer_x(char *buffer, t_printf *pf, int *position)
{
    int     size;
    char    c;

    c = (pf->flag.zero && !pf->precision.exist) ? '0' : ' ';
    size = pf->width.width;
    if (pf->precision.exist)
        size -= (pf->number_of_signs > pf->precision.precision) ? pf->number_of_signs : pf->precision.precision;
    if (size < 0)
        return (0);
    while (size--)
    {
        buffer[*position] = c;
        *position += 1;
    }
    return (0);
}
