#include "ft_printf.h"

int     precision_parsing(t_printf *p, const char *format, int *i, va_list args)
{
    if (format[*i] == '.')
    {
        *i += 1;
        if (format[*i] == '*')
		{
			*i += 1;
            p->precision = va_arg(args, int);
		}
        else if (format[*i] >= '0' && format[*i] <= '9')
            p->precision = p_atoi(format, i);
        else
            p->precision = -1;
    }
    else
        p->precision = -2;
    return (0);
}
