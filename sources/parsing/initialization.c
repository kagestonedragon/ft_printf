#include "ft_printf.h"
#include <stdlib.h>

static void     initialize_flags(t_printf *pf)
{
    pf->flag.exist = false;
    pf->flag.zero = false;
    pf->flag.minus = false;
    pf->flag.plus = false;
    pf->flag.space = false;
    pf->flag.hash = false;
}

static void     initialize_length(t_printf *pf)
{
    pf->length.exist = false;
    pf->length.hh = false;
    pf->length.ll = false;
    pf->length.h = false;
    pf->length.l = false;
    pf->length.hl = false;
}

t_printf        *initialization(int file_descriptor)
{
    t_printf    *pf;

    pf = (t_printf *)malloc(sizeof(t_printf));
    pf->file_descriptor = file_descriptor;
    pf->type.digits = 0;
	pf->type.position = 0;
    pf->type.buffer[0] = '\0';
    initialize_flags(pf);
    initialize_length(pf);
    return (pf);
}
