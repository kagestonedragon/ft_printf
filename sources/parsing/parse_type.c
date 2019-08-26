#include "ft_printf.h"

void    parse_type(t_printf *pf, const char *format, int *i, va_list args)
{
    if (format[*i] == 'd' || format[*i] == 'i')
		collect_decimal(pf, args);
    else if (format[*i] == 'u')
        collect_unsigned(pf, args);
    else if (format[*i] == 'x')
	{
        collect_hexadecimal(pf, args);
		string_tolower(pf->type.buffer);
	}
    else if (format[*i] == 'X')
		collect_hexadecimal(pf, args);
    else if (format[*i] == 'o')
        collect_octaldecimal(pf, args);
	else if (format[*i] == 's')
        collect_string(pf, args);
    /*else if (format[*i] == 'c')
        *i += collect_character(pf, args);
    else if (format[*i] == 'p')
        *i += collect_address(pf, args);
    else if (format[*i] == '%')
        *i += collect_percent(pf, args);*/
}
