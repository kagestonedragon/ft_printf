#include "ft_printf.h"

t_bool  save_type_i(t_printf *pf)
{
    pf->type.exist = true;
    pf->type.i = true;
    return (true);
}
