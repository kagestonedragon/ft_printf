#include "ft_printf.h"
#include <stdlib.h>

t_printf        *init(void)
{
    t_printf    *pf;

    pf = (t_printf *)malloc(sizeof(t_printf));
    init_flags(pf);
    init_width(pf);
    init_type(pf);
    init_length(pf);
    return (pf);
}
