#include "ft_printf.h"

t_bool  save_length_ll(t_printf *pf)
{
    pf->length.exist = true;
    pf->length.ll = true;
    return (true);
}
