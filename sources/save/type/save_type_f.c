#include "ft_printf.h"

t_bool  save_type_f(t_printf *pf)
{
    pf->type.exist = true;
    pf->type.f = true;
    return (true);
}
