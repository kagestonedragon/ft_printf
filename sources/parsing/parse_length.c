#include "ft_printf.h"

void	parse_length(t_printf *pf, const char *format, int *i)
{
    if (format[*i] == 'h' && format[*i + 1] == 'h')
        ((pf->length.hh = (pf->length.exist = (*i += 2))));
    else if (format[*i] == 'l' && format[*i + 1] == 'l')
        ((pf->length.ll = (pf->length.exist = (*i += 2))));
    else if (format[*i] == 'h')
		((pf->length.h = (pf->length.exist = ++*i)));
    else if (format[*i] == 'l')
        ((pf->length.l = (pf->length.exist = ++*i)));
    else if (format[*i] == 'L')
        ((pf->length.hl = (pf->length.exist = ++*i)));
}
