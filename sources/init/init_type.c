#include "ft_printf.h"

void    init_type(t_printf *pf)
{
    pf->type.d = false;
    pf->type.i = false;
    pf->type.u = false;
    pf->type.f = false;
    pf->type.x = false;
    pf->type.hx = false;
    pf->type.o = false;
    pf->type.s = false;
    pf->type.c = false;
    pf->type.p = false;
}
