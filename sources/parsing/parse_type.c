#include "ft_printf.h"

void    parse_type(t_printf *pf, const char *format, int *i, va_list args)
{
    if (format[*i] == 'd' || format[*i] == 'i')
        *i += collect_decimal(pf, args);
    else if (format[*i] == 'u')
        *i += collect_unsigned(pf, args);
    else if (format[*i] == 'x')
        *i += collect_hexadecimal_low(pf, args);
    else if (format[*i] == 'X')
        *i += collect_hexadecimal_up(pf, args);
    else if (format[*i] == 'o')
        *i += collect_octadecimal(pf, args);
    else if (format[*i] == 's')
        *i += collect_string(pf, args);
    else if (format[*i] == 'c')
        *i += collect_character(pf, args);
    else if (format[*i] == 'p')
        *i += collect_address(pf, args);
    else if (format[*i] == '%')
        *i += collect_percent(pf, args);
}
