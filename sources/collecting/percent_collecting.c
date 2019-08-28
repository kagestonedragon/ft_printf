#include "ft_printf.h"
#include <unistd.h>
#include <stdio.h>

static int          get_sign(t_printf *p)
{
    p->sign.value = new_string("");
    p->sign.length = p_strlen(p->sign.value);
    return (0);
}

static int          get_percent(t_printf *p)
{
    get_sign(p);
    p->arg.value = new_string("%");
    return (p_strlen(p->arg.value));
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

int                 percent_collecting(t_printf *p)
{
    p->arg.length = get_percent(p);
    p->width = width_calculating(p);
    p->precision = 0;
    return (decimal_stdout_left(p));
}
