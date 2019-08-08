#include "ft_printf.h"

t_bool  save_type_c(t_printf *pf)
{
    pf->type.exist = true;
    pf->type.c = true;
    return (true);
}
