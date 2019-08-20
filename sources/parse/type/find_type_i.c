#include "ft_printf.h"

t_bool  find_type_i(t_printf *pf, int *i)
{
    *i += 1;
    return (save_type_i(pf));
}
