#include "ft_printf.h"
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>

void		create_sign(t_printf *pf, int sign)
{
	if (!sign)
	{
		pf->type.sign.exist = true;
		pf->type.sign.sign = 45;
	}
	else if (pf->flag.plus)
	{
		pf->type.sign.exist = true;
		pf->type.sign.sign = 43;
	}
	else if (pf->flag.space)
	{
		pf->type.sign.exist = true;
		pf->type.sign.sign = ' ';
	}
	else
		pf->type.sign.exist = false;
}

void add_sign(t_printf *pf)
{
    if (pf->type.sign.exist)
        pf->type.buffer[pf->type.position++] = pf->type.sign.sign;
}

void add_precision(t_printf *pf)
{
	int	temporary;

	temporary = pf->precision.precision;
    if ((temporary -= pf->type.digits) <= 0)
        return ;
    while (temporary--)
        pf->type.buffer[pf->type.position++] = '0';
}

void add_width(t_printf *pf, int character)
{
    if ((pf->width.width -= ((pf->precision.precision > pf->type.digits ? pf->precision.precision : pf->type.digits) + pf->type.sign.exist)) <= 0)
        return ;
    while (pf->width.width--)
        pf->type.buffer[pf->type.position++] = character;
}

void add_temporary(t_printf *pf)
{
    int     i;

    i = -1;
    while (pf->type.temporary_buffer[++i])
        pf->type.buffer[pf->type.position++] = pf->type.temporary_buffer[i];
}

void		get_temporary_buffer(t_printf *pf, va_list args)
{
	if (pf->length.exist)
	{
		if (pf->length.hh)
			pf_itoa(pf, (char)va_arg(args, void*));
		else if (pf->length.h)
			pf_itoa(pf, (short)va_arg(args, void*));
		else if (pf->length.l)
			pf_litoa(pf, (long)va_arg(args, void *));
		else if (pf->length.ll)
			pf_llitoa(pf, (long long)va_arg(args, void *));
	}
	else
		pf_itoa(pf, va_arg(args, int));
}

void		collect_decimal(t_printf *pf, va_list args)
{
	get_temporary_buffer(pf, args);
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
    else
    {
        add_sign(pf);
        add_width(pf, (pf->precision.exist ? ' ' : '0'));
        add_precision(pf);
        add_temporary(pf);
    }
	pf->type.buffer[pf->type.position] = '\0';
}
