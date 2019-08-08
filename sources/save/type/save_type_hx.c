#include "ft_printf.h"

t_bool  save_type_hx(t_printf *pf)
{
    pf->type.exist = true;
    pf->type.hx = true;
    return (true);
}
