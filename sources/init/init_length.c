#include "ft_printf.h"

void    init_length(t_printf *pf)
{
    pf->length.exist = false;
    pf->length.hh = false;
    pf->length.h = false;
    pf->length.l = false;
    pf->length.ll = false;
    pf->length.hl = false;
}
