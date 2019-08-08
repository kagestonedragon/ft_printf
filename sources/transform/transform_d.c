#include "ft_printf.h"

int     transform_d(t_printf *pf, va_list args, int *len)
{
    int d;
    int nos;

    d = va_arg(args, int);
    nos = number_of_signs(d);
    if (pf->)
}
