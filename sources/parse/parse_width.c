#include "ft_printf.h"
#include <stdarg.h>

int     parse_width(t_printf *pf, const char *format, int *i, va_list args)
{
    if (format[*i] == '*')
    {
        save_width(pf, args);
        *i += 1;
    }
    return (0);
}
