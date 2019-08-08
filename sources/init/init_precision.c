#include "ft_printf.h"

void    init_precision(t_printf *pf)
{
    pf->precision.exist_integer = false;
    pf->precision.exist_fractional = false;
    pf->precision.integer = 0;
    pf->precision.fractional = 0;
}
