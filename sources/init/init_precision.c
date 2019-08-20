#include "ft_printf.h"

void    init_precision(t_printf *pf)
{
    pf->precision.exist = false;
    pf->precision.precision = 0;
}
