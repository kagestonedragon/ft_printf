#include "ft_printf.h"

t_bool  find_type_hx(t_printf *pf, int *i)
{
    *i += 1;
    return (save_type_hx(pf));
}
