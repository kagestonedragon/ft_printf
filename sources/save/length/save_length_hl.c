#include "ft_printf.h"

t_bool  save_length_hl(t_printf *pf)
{
    pf->length.exist = true;
    pf->length.hl = true;
    return (true);
}
