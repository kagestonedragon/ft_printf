#include "ft_printf.h"

int     width_parsing(t_printf *p, const char *format, int *i, va_list args)
{
    if (format[*i] == '*')
        p->width = va_arg(args, int);
    else
        p->width = p_atoi(format, i);
    return (0);
}
