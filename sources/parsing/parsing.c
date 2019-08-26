#include "ft_printf.h"

int             parsing(const char *format, int *i, va_list args)
{
    t_printf    *pf;

    pf = create_tprintf();
    parse_flags(pf);
    parse_width(pf, args);
    parse_precision(pf, args);
    parse_length(pf);
    parse_type(pf, args);
}
