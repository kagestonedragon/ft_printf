#include "ft_printf.h"

t_bool  save_type_u(t_printf *pf)
{
    pf->type.exist = true;
    pf->type.u = true;
    return (true);
}
