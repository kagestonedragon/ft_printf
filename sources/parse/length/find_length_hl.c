#include "ft_printf.h"

t_bool  find_length_hl(t_printf *pf, int *i)
{
    *i += 1;
    return (save_length_hl(pf));
}
