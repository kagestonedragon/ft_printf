#include "ft_printf.h"

t_bool  find_type_x(t_printf *pf, int *i)
{
    *i += 1;
    return (save_type_x(pf));
}
