#include "ft_printf.h"

int     type_parsing(t_printf *p, const char *format, int *i)
{
    p->type = format[*i];
    return (0);
}
