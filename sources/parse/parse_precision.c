#include "ft_printf.h"

int         parse_integer_precision(t_printf *pf, int precision)
{
    save_integer_precision(pf, precision);
    return (0);
}

int         parse_fractional_precision(t_printf *pf, const char *format, int *i)
{
    *i += 1;
    save_fractional_precision(pf, format, i);
    return (0);
}
