#include "ft_printf.h"

int             parse(const char *format, va_list args, int *i, int *len)
{
    t_printf    *pf;

	(void)len;
    pf = init();
    parse_flags(pf, format, i);
    parse_temporary(pf, format, i, args);
    parse_length(pf, format, i);
    parse_type(pf, format, i);
	test_parse(pf);
	return (0);
}
