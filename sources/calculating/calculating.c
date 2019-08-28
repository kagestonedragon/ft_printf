#include "ft_printf.h"

int     width_calculating(t_printf *p)
{
    p->width -= p->sign.length;
    if (p->precision > p->arg.length)
        p->width -= p->precision;
    else
        p->width -= p->arg.length;
    return ((p->width > 0) ? p->width : 0);
}

int     precision_calculating(t_printf *p)
{
    p->precision -= p->arg.length;
    return ((p->precision > 0) ? p->precision : 0);
}
