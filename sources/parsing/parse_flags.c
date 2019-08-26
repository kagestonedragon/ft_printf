#include "ft_printf.h"
#include <stdarg.h>

static t_bool   is_flag(t_printf *pf, char f)
{
    if (f == '0')
        return ((pf->flag.zero = true));
    else if (f == '-')
        return ((pf->flag.minus = true));
    else if (f == '+')
        return ((pf->flag.plus = true));
    else if (f == ' ')
        return ((pf->flag.space = true));
    else if (f == '#')
        return ((pf->flag.hash = true));
    return (false);
}

void            parse_flags(t_printf *pf, const char *format, int *i)
{
    *i += 1;
    while (is_flag(pf, format[*i]))
    {
        pf->flag.exist = true;
        *i += 1;
    }
}
