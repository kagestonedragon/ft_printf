#include "ft_printf.h"

t_bool  save_precision(t_printf *pf, const char *format, int *i)
{
    pf->precision.exist = true;
    pf->precision.precision = ft_atoi(&format[*i]);
    return (true);
}
