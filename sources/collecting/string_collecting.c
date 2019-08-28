#include "ft_printf.h"
#include <unistd.h>
#include <stdio.h>

static int          get_sign(t_printf *p)
{
    p->sign.value = new_string("");
    p->sign.length = p_strlen(p->sign.value);
    return (0);
}

static int          get_string(t_printf *p, va_list args)
{
    char            *temporary;
    int             length;

    get_sign(p);
    temporary = (char *)va_arg(args, void*);
    if (!temporary)
        p->arg.value = new_string("(null)");
    else
    {
        if (!temporary[0] && p->precision > 0)
            p->width += p->precision;
        p->arg.value = new_string(temporary);
    }
    length = p_strlen(p->arg.value);
    if (length > p->precision && (p->precision >= 0))
        return (p->precision);
    return (length);
}

static int          decimal_stdout_left(t_printf *p)
{
    int             size;

    size = p->width + p->precision + p->arg.length + p->sign.length;
    if (!p->flag.minus && !p->flag.zero)
        while (p->width--)
            write(1, " ", 1);
    (p->sign.length) ? write(1, p->sign.value, p->sign.length) : 0;
    if (!p->flag.minus && p->flag.zero)
        while (p->width--)
            write(1, (p->precision > 0 ? " " : "0"), 1);
    while (p->precision--)
        write(1, "0", 1);
    write(1, p->arg.value, p->arg.length);
    if (p->flag.minus)
        while (p->width--)
            write(1, " ", 1);
    return (size);
}

int                 string_collecting(t_printf *p, va_list args)
{
    p->arg.length = get_string(p, args);
    p->width = width_calculating(p);
    p->precision = 0;
    return (decimal_stdout_left(p));
}


