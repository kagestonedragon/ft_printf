#include "ft_printf.h"
#include <stdlib.h>
#include <unistd.h>

int             parsing(int file_descriptor, const char *format, int *i, va_list args)
{
    t_printf    *pf;
	int			length;

    pf = initialization(file_descriptor);
    parse_flags(pf,format, i);
    parse_width(pf, format, i, args);
    parse_precision(pf, format, i, args);
    parse_length(pf, format, i);
    parse_type(pf, format, i, args);
	write(pf->file_descriptor, pf->type.buffer, pf->type.position);
	length = pf->type.position;
	free(pf);
	return (length);
}
