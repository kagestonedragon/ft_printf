#include "ft_printf.h"

t_bool  save_type_p(t_printf *pf)
{
    pf->type.exist = true;
    pf->type.p = true;
    return (true);
}
