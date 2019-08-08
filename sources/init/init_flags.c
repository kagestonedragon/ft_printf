#include "ft_printf.h"

void    init_flags(t_printf *pf)
{
    pf->flag.exist = false;
    pf->flag.minus = false;
    pf->flag.plus = false;
    pf->flag.space = false;
    pf->flag.sharp = false;
    pf->flag.zero = false;
}
