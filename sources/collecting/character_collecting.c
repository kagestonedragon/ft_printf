#include "ft_printf.h"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

static int          get_sign(t_printf *p)
{
    p->sign.value = new_string("");
    p->sign.length = p_strlen(p->sign.value);
    return (0);
}

static int          get_character(t_printf *p, va_list args)
{
    char            temporary;

    get_sign(p);
    temporary = (char)va_arg(args, int);
    if (!temporary || temporary == 0)
        p->arg.value = new_string("^@");
    else
    {
        p->arg.value = (char *)malloc(sizeof(char) * 2);
        p->arg.value[0] = 42;
        p->arg.value[1] = '\0';
    }
    p->arg.length = p_strlen(p->arg.value);
    return (0);
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

int                 character_collecting(t_printf *p, va_list args)
{
   get_character(p, args);
    p->width += (p->arg.length == 2) ? 1 : 0; 
    p->width = width_calculating(p); 
    p->precision = 0;
    return (p->arg.length == 2 ? decimal_stdout_left(p) - 1 : decimal_stdout_left(p));
}



