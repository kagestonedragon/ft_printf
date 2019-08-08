#include "ft_printf.h"
#include <stdarg.h>

int     parse_width_from_string(t_printf *pf, int width)
{
    save_width_from_string(pf, width);
    return (0);
}

int     parse_width_from_args(t_printf *pf, int *i, va_list args)
{
    *i += 1;
    save_width_from_args(pf, args);
    return (0);
}
