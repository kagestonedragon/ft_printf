#include "ft_printf.h"

void    parse_length(t_printf *pf, const char *format, int *i)
{
    if (format[++*i] == 'h')
        return ((pf->length.hh = (pf->length.exist = ++*i)));
    else if (format[*i] == 'l')
        return ((pf->length.ll = (pf->length.exist = ++*i)));
    else if (format[--*i] == 'h')
        return ((pf->length.h = (pf->length.exist = ++*i)));
    else if (format[*i] == 'l')
        return ((pf->length.l = (pf->length.exist = ++*i)));
    else if (format[*i] == 'L')
        return ((pf->length.hl = (pf->length.exist = ++*i))); 
}
