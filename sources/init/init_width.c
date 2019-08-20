#include "ft_printf.h"

void    init_width(t_printf *pf)
{
    pf->width.exist = false;
    pf->width.width = 0;
}
