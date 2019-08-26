#include "ft_printf.h"
#include <stdarg.h>

static t_bool   is_flag(t_printf *pf, char f)
{
    if (c == '0')
        return ((pf->flag.zero = true));
    else if (c == '-')
        return ((pf->flag.zero ? pf->flag.zero : (pf->flag.minus = true)));
    else if (c == '+')
        return ((pf->flag.plus = true));
    else if (c == ' ')
        return ((pf->flag.plus ? pf->flag.plus : (pf->flag.space = true)));
    else if (c == '#')
        return ((pf->flag.hash = true));
    return (false);
}

void            parse_flags(t_printf *pf, const char *format, int *i)
{
    *i += 1;
    while (if_flag(pf, format[*i]))
    {
        pf->flag.exist = true;
        *i += 1;
    }
}
