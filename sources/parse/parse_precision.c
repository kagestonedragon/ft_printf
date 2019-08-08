#include "ft_printf.h"
#include "libft.h"

int         parse_precision(t_printf *pf, const char *format, int *i)
{
    if (format[*i] == '.')
    {
        *i += 1;
        save_precision(pf, format, i);
        skip_numbers(format, i);
    }
    return (0);
}
