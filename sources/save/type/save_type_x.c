#include "ft_printf.h"

t_bool  save_type_x(t_printf *pf)
{
    pf->type.exist = true;
    pf->type.x = true;
    return (true);
}
