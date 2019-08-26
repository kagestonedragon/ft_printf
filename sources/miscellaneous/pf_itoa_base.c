#include "ft_printf.h"

void		pf_utoa_base(t_printf *pf, unsigned int value, int base)
{
	char	base_tab[] = "0123456789ABCDEF";
	int		i;

	pf->type.digits = (i = u_digits(value, base));
	if (value == 0)
		pf->type.temporary_buffer[0] = '0';
	while (value)
	{
		pf->type.temporary_buffer[--i] = base_tab[value % base];
		value /= base;
	}
	pf->type.temporary_buffer[pf->type.digits] = '\0';
}

void		pf_lutoa_base(t_printf *pf, unsigned long value, int base)
{
	char	base_tab[] = "0123456789ABCDEF";
	int		i;

	pf->type.digits = (i = lu_digits(value, base));
	if (value == 0)
		pf->type.temporary_buffer[0] = '0';
	while (value)
	{
		pf->type.temporary_buffer[--i] = base_tab[value % base];
		value /= base;
	}
	pf->type.temporary_buffer[pf->type.digits] = '\0';
}

void		pf_llutoa_base(t_printf *pf, unsigned long long value, int base)
{
	char	base_tab[] = "0123456789ABDCEF";
	int		i;

	pf->type.digits = (i = llu_digits(value, base));
	if (value == 0)
		pf->type.temporary_buffer[0] = '0';
	while (value)
	{
		pf->type.temporary_buffer[--i] = base_tab[value % base];
		value /= base;
	}
	pf->type.temporary_buffer[pf->type.digits] = '\0';
}
