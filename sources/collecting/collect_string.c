#include "ft_printf.h"
#include <stdarg.h>

static void	get_temporary_buffer(t_printf *pf, va_list args)
{
	int		i;
	char	*buffer;

	buffer = (char *)va_arg(args, void*);
	if (!buffer)
	{
		pf->type.temporary_buffer[0] = '(';
		pf->type.temporary_buffer[1] = 'n';
		pf->type.temporary_buffer[2] = 'u';
		pf->type.temporary_buffer[3] = 'l';
		pf->type.temporary_buffer[4] = 'l';
		pf->type.temporary_buffer[5] = ')';
		pf->type.temporary_buffer[6] = '\0';
		pf->type.digits = 6;
		pf->precision.precision = 0;
		return ;
	}
	if (!buffer[0])
	{
		pf->type.digits = 0;
		pf->precision.precision = 0;
		return ;
	}
	if (pf->precision.precision)
	{
		i = (pf->type.digits = pf->precision.precision);
		while (buffer[pf->precision.precision--])
			pf->type.temporary_buffer[pf->precision.precision] = buffer[pf->precision.precision];
		pf->type.temporary_buffer[i] = '\0';
	}
	else
	{
		i = -1;
		while (buffer[++i])
			pf->type.temporary_buffer[i] = buffer[i];
		pf->type.temporary_buffer[i] = '\0';
		pf->type.digits = i;
	}

}

void		collect_string(t_printf *pf, va_list args)
{
	get_temporary_buffer(pf, args);
	if (!pf->flag.minus && !pf->flag.zero)
	{
		add_width(pf, ' ');
		add_temporary(pf);
	}
	else if (pf->flag.minus)
	{
		add_temporary(pf);
		add_width(pf, ' ');
	}
	else
	{
		add_width(pf, (pf->precision.exist ? ' ' : '0'));
		add_temporary(pf);
	}
	pf->type.buffer[pf->type.position] = '\0';
}
