#include "ft_printf.h"

t_bool  save_length_hh(t_printf *pf)
{
    pf->length.exist = true; 
    pf->length.hh = true;
    return (true);
}
