#include "ft_printf.h"

void		pf_strcat(t_printf *pf, char *str, int s, int e)
{
	pf->type.digits = e;
	while (++s < e)
		pf->type.temporary_buffer[s] = str[s];
	pf->type.temporary_buffer[s] = '\0';
}
