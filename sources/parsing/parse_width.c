#include "ft_printf.h"
#include <stdarg.h>

void        parse_width(t_printf *pf, const char *format, int *i, va_list args)
{
    if (format[*i] == '*')
    {
        *i += 1;
        pf->width.exist = true;
        pf->width.width = va_arg(args, int);
    }
    else if (format[*i] >= '0' && format[*i] <= '9')
    {
        pf->width.exist = true;
        pf->width.width = pf_atoi(&format[*i], i);
    }
    else
        pf->width.exist = false;
}
