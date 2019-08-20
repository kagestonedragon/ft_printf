#include "ft_printf.h"

t_bool  save_length_l(t_printf *pf)
{
    pf->length.exist = true;
    pf->length.l = true;
    return (true);
}
