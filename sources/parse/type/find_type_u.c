#include "ft_printf.h"

t_bool  find_type_u(t_printf *pf, int *i)
{
    *i += 1;
    return (save_type_u(pf));
}
