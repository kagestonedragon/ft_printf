#include "ft_printf.h"

t_bool  save_length_h(t_printf *pf)
{
    pf->length.exist = true;
    pf->length.h = true;
    return (true);
}
