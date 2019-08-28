#include "ft_printf.h"
#include <unistd.h>
#include <stdio.h>

static int          get_sign(t_printf *p)
{
    p->sign.value = new_string("");
    p->sign.length = p_strlen(p->sign.value);
    return (0);
}

static int          get_string_s(t_printf *p, va_list args)
{
    char            *temporary;
    int             length;

    get_sign(p);
    temporary = (char *)va_arg(args, void*);
    if (!temporary)
        p->arg.value = new_string("(null)");
	else
        p->arg.value = new_string(temporary);
    length = p_strlen(p->arg.value);
    if (length > p->precision && (p->precision >= 0))
        return (p->precision);
	if (p->precision == -1)
		return (0);
    return (length);
}

int                 string_collecting(t_printf *p, va_list args)
{
    p->arg.length = get_string_s(p, args);
	p->precision = 0;
    p->width = width_calculating(p);
    return (write_to_console(p));
}


