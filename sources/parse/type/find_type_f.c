#include "ft_printf.h"

t_bool  find_type_f(t_printf *pf, int *i)
{
    *i += 1;
    return (save_type_f(pf));
}
