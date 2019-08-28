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

int                 percent_collecting(t_printf *p)
{
    p->arg.length = get_percent(p);
    p->width = width_calculating(p);
    p->precision = 0;
    return (write_to_console(p));
}
