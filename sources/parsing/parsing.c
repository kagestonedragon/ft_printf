#include "ft_printf.h"
#include <stdlib.h>

static t_printf *initialization()
{
    t_printf    *p;

    p = (t_printf *)malloc(sizeof(t_printf));
    p->flag.minus = 0;
    p->flag.plus = 0;
    p->flag.space = 0;
    p->flag.zero = 0;
    p->flag.hash = 0;
    p->width = 0;
    p->length = 0;
    p->type = 0;
	p->sign.value = new_string("");
	p->sign.length = 0;
    return (p);
}

int             parsing(const char *format, int *i, va_list args)
{
    int         length;
    t_printf    *p;

	if (!format[*i + 1])
		return (0);
    p = initialization();
    flag_parsing(p, format, i);
    width_parsing(p, format, i, args);
    precision_parsing(p, format, i, args);
    length_parsing(p, format, i);
    type_parsing(p, format, i);
    length = collecting(p,args);
    return (length);
}
