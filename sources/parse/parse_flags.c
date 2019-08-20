#include "ft_printf.h"
#include <stdarg.h>

static t_bool   find_flag(t_printf *pf, char c)
{
    if (c == '-')
        return (save_flag_minus(pf));
    else if (c == '+')
        return (save_flag_plus(pf));
    else if (c == ' ')
        return (save_flag_space(pf));
    else if (c == '#')
        return (save_flag_sharp(pf));
    else if (c == '0')
        return (save_flag_zero(pf));
    else
        return (false);
}
int             parse_flags(t_printf *pf, const char *format, int *i)
{
    *i += 1;
    while (find_flag(pf, format[*i]))
        *i += 1;
    return (0);
}
