#include "ft_printf.h"

int     width_parsing(t_printf *p, const char *format, int *i, va_list args)
{
	int	arg;

    if (format[*i] == '*')
	{
		*i += 1;
		p->width = ((arg = va_arg(args, int)) > 0) ? arg : -arg;
		if (arg < 0)
			p->flag.minus = true;
	}
	if (format[*i] >= '0' && format[*i] <= '9')
    	p->width = p_atoi(format, i);
    return (0);
}
