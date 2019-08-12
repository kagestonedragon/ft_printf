#include "ft_printf.h"

t_bool  save_width_from_string(t_printf *pf, const char *format, int *i)
{
    pf->width.exist = true;
    pf->width.width = ft_atoi(&format[*i]);
    return (true);
}

t_bool  save_width_from_args(t_printf *pf, va_list args)
{
    pf->width.exist = true;
    pf->width.width = va_arg(args, int);
    return (true);
}
