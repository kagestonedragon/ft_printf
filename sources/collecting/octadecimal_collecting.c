#include "ft_printf.h"
#include <unistd.h>
#include <stdio.h>

static unsigned long long get_sign(t_printf *p, unsigned long long value)
{
    if (p->flag.hash)
        p->sign.value = new_string("0");
    else
        p->sign.value = new_string("");
    p->sign.length = p_strlen(p->sign.value);
    return (value);
}

static int          get_decimal(t_printf *p, va_list args)
{
    p->arg.base = 8;
    if (p->length == LEN_HH)
        p->arg.value = p_itoa_base(p, get_sign(p, (unsigned char)va_arg(args, void*)), p->arg.base);
    else if (p->length == LEN_H)
        p->arg.value = p_itoa_base(p, get_sign(p, (unsigned short)va_arg(args, void*)), p->arg.base);
    else if (p->length == LEN_LL)
        p->arg.value = p_itoa_base(p, get_sign(p, (unsigned long long)va_arg(args, void *)), p->arg.base);
    else if (p->length == LEN_L)
        p->arg.value = p_itoa_base(p, get_sign(p, (unsigned long)va_arg(args, void*)), p->arg.base);
    else
        p->arg.value = p_itoa_base(p, get_sign(p, (unsigned int)va_arg(args, void*)), p->arg.base);
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

int                 octadecimal_collecting(t_printf *p, va_list args)
{
    p->arg.length = get_decimal(p, args);
    p->width = width_calculating(p);
    p->precision = precision_calculating(p);
    return (decimal_stdout_left(p));
}

