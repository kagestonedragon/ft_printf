#include "ft_printf.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int			actions(t_printf *pf, int d, int nos, int *len)
{
	if (pf->flag.minus)
	{
		*len += ft_putsign(pf, d);
		printf("c after putsign: %d\n", *len);
		*len += ft_putzeros(pf, pf->precision.precision - nos);
		printf("c after putzeros: %d\n", *len);
		putnbr(d, len);
		printf("c after putnbr: %d\n", *len);		
		*len += ft_putspaces(pf, d, pf->width.width - pf->precision.precision - 1);
		printf("c after putspaces: %d\n", *len);
	}
	else
	{
		ft_putspaces(pf, d, pf->width.width - pf->precision.precision - 1);
		ft_putsign(pf, d);
		ft_putzeros(pf, pf->precision.precision - nos);
		putnbr(d, len);
	}
	return (0);
}

int     	transform_d(t_printf *pf, va_list args, int *len)
{
    int		d;
	int		nos;

	d = va_arg(args, int);
	nos = number_of_signs(d);
    if (pf->flag.exist)
		actions(pf, d, nos, len);
	return (0);
}
