#include "ft_printf.h"

void        parse_precision(t_printf *pf, const char *format, int *i, va_list args)
{
    if (format[*i] == '.')
    {
        *i += 1;
        if (format[*i] == '*')
        {
            *i += 1;
            pf->precision.exist = true;
            pf->precision.precision = va_arg(args, int);
        }
        else if (format[*i] >= '0' && format[*i] <= '9')
        {
            pf->precision.exist = true;
            pf->precision.precision = pf_atoi(&format[*i], i);
        }
        else
		{
            pf->precision.exist = false;
			pf->precision.precision = 0;	
    	}
	}
}
