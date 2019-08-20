#include "ft_printf.h"

t_bool  find_length_l(t_printf *pf, int *i)
{
    *i += 1;
    return (save_length_l(pf));
}
