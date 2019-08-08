#include "ft_printf.h"

t_bool  save_width(t_printf *pf, va_list args)
{
    pf->width.exist = true;
    pf->width.width = va_arg(args, int);
    return (true);
}
