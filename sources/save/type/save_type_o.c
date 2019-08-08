#include "ft_printf.h"

t_bool  save_type_o(t_printf *pf)
{
    pf->type.exist = true;
    pf->type.o = true;
    return (true);
}
