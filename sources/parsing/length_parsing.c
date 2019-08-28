#include "ft_printf.h"

int     length_parsing(t_printf *p, const char *format, int *i)
{
    if (format[*i] == LEN_H && format[*i + 1] == LEN_H)
    {
        p->length = LEN_HH;
        *i += 2;
    }
    else if (format[*i] == LEN_L && format[*i + 1] == LEN_L)
    {
        p->length = LEN_LL;
        *i += 2;
    }
    else if (format[*i] == LEN_L)
    {
        p->length = LEN_L;
        *i += 1;
    }
    else if (format[*i] == LEN_H)
    {
        p->length = LEN_H;
        *i += 1;
    }
    return (0);
}
