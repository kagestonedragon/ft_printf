#include "ft_printf.h"

static void		get_temporary_buffer(t_printf *pf, va_list args)
{
	if (pf->length.exist)
	{
		if (pf->length.hh)
			pf_utoa_base(pf, (char)va_arg(args, void*), 10);
		else if (pf->length.h)
			pf_utoa_base(pf, (unsigned short)va_arg(args, void*), 10);
		else if (pf->length.l)
			pf_lutoa_base(pf, (unsigned long)va_arg(args, void*), 10);
		else if (pf->length.ll)
			pf_llutoa_base(pf, (unsigned long long)va_arg(args, void *), 10);
	}
	else
		pf_utoa_base(pf, (unsigned int)va_arg(args, void*), 10);
}

void		collect_unsigned(t_printf *pf, va_list args)
{
	get_temporary_buffer(pf, args);
	if (!pf->flag.minus && !pf->flag.zero)
	{
		add_width(pf, ' ');
		add_precision(pf);
		add_temporary(pf);
	}
	else if (pf->flag.minus)
	{
		add_precision(pf);
		add_temporary(pf);
		add_width(pf, ' ');
	}
	else
	{
		add_width(pf, (pf->precision.exist ? ' ' : '0'));
		add_precision(pf);
		add_temporary(pf);
	}
	pf->type.buffer[pf->type.position] = '\0';
}
