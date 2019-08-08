#include "ft_printf.h"
#include <stdarg.h>

int     parse_temporary(t_printf *pf, const char *format, int *i, va_list args)
{
    int temporary;

    if (format[*i] == '*')
        parse_width_from_args(pf, i, args);
    if (format[*i] >= '0' && format[*i] <= '9')
    {
        temporary = ft_atoi(&format[*i]);
        skip_numbers(format, i);
        if (format[*i] == '.')
            parse_integer_precision(pf, temporary);
        else
            parse_width_from_string(pf, temporary);
    }
    if (format[*i] == '.')
    {
        if (format[*i + 1] >= '0' && format[*i + 1] <= '9')
        {
            parse_fractional_precision(pf, format, i);
            skip_numbers(format, i);
        }
        else
            *i += 1;
    }
    return (0);
}
