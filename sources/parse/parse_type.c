#include "ft_printf.h"

static t_bool   find_type(t_printf *pf, const char *format, int *i)
{
    if (format[*i] == 'd')
        return (find_type_d(pf, i));
    else if (format[*i] == 'i')
        return (find_type_i(pf, i));
    else if (format[*i] == 'u')
        return (find_type_u(pf ,i));
    else if (format[*i] == 'f')
        return (find_type_f(pf, i));
    else if (format[*i] == 'x')
        return (find_type_x(pf, i));
    else if (format[*i] == 'X')
        return (find_type_x(pf, i));
    else if (format[*i] == 'o')
        return (find_type_o(pf, i));
    else if (format[*i] == 's')
        return (find_type_s(pf, i));
    else if (format[*i] == 'c')
        return (find_type_c(pf, i));
    else if (format[*i] == 'p')
        return (find_type_p(pf, i));
    return (false);
}

int             parse_type(t_printf *pf, const char *format, int *i)
{
    if (find_type(pf, format, i))
        return (0);
    return (0);
}
