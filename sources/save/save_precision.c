#include "ft_printf.h"

t_bool  save_integer_precision(t_printf *pf, int precision)
{
    pf->precision.exist_integer = true;
    pf->precision.integer = precision;
    return (true);
}

t_bool  save_fractional_precision(t_printf *pf, const char *format, int *i)
{
    pf->precision.exist_fractional = true;
    pf->precision.fractional = ft_atoi(&format[*i]);
    return (true);
}
