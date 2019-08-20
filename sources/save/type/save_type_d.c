#include "ft_printf.h"

t_bool  save_type_d(t_printf *pf)
{
    pf->type.exist = true;
    pf->type.d = true;
    return (true);
}
