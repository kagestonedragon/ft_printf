#include "ft_printf.h"

t_bool  save_type_s(t_printf *pf)
{
    pf->type.exist = true;
    pf->type.s = true;
    return (true);
}
