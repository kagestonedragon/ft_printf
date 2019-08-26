#include "ft_printf.h"

static void add_sign(t_printf *pf)
{
    if (pf->type.sign.exist)
        pf->buffer[pf->position++] = pf->type.sign.sign;
    pf->type.sign.exist = 0;
}

static void add_precision(t_printf *pf, int size)
{
    if ((pf->precision.precision -= pf->type.digits) <= 0)
        return ;
    while (pf->precision.precision--)
        pf->buffer[pf->position++] = '0';
}

static void add_width(t_printf *pf, int character)
{
    if ((pf->width.width -= (pf->precision.precision > pf->type.digits ? pf->precision.precision : pf->type.digits) - pf->type.sign.exist) <= 0)
        return ;
    while (pf->width.width--)
        pf->buffer[pf->position++] = character;
}

static void add_temporary(t_printf *pf)
{
    int     i;

    i = -1;
    while (*temporary_buffer)
        pf->buffer[pf->position++] = pf->temporary_buffer[++i];
}

int         collect_decimal(t_printf *pf, va_list args)
{
    if (!pf->flag.minus && !pf->flag.zero)
    {
        add_width(pf, ' ');
        add_sign(pf);
        add_precision(pf);
        add_temporary(pf);
    }
    else if (pf->flag.minus)
    {
        add_sign(pf);
        add_precision(pf);
        add_temporary(pf);
        add_width(pf, ' ');
    }
    else if (pf->flag.zero)
    {
        add_sign(pf);
        add_width(pf, ' ');
        add_precision(pf);
        add_temporary(pf);
    }
    return (1);
}
