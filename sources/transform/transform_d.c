#include "ft_printf.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int			save_transform_space(t_printf *pf)
{
	free(pf->transform->flag_space);
	pf->transform->flag_space = (char *)malloc(sizeof(char) * 2);
	pf->transform->flag_space[0] = ' ';
	pf->transform->flag_space[1] = '\0';
	pf->width.width--;
	return (0);
}

int			save_transform_plus(t_printf *pf)
{
	free(pf->transform->flag_plus);
	pf->transform->flag_plus = (char *)malloc(sizeof(char) * 2);
	pf->transform->flag_plus[0] = '+';
	pf->transform->flag_plus[1] = '\0';
	pf->width.width--;
	return (0);
}

int			save_transform_precision(t_printf *pf, int nos)
{
	free(pf->transform.precision);
	pf->transform->precision = create_width_string(pf->width.width - nos, '0');
	return (0);
}

static int	transform_d_flag(t_printf *pf, int d, int *len, int nos)
{
	char	*width;

	if (pf->flag.space && !pf->flag.plus && d > 0)
		save_transform_space(pf);
	else if (pf->flag.plus && d > 0)
		save_transform_plus(pf);
	else if (pf->precision.exist && nos < pf->precision.precision)
		save_transform_precision(pf, nos);
	else if (pf->length.exist)
		
	else if (pf->flag.minus && pf->width.exist)
	{
		putnbr(d, len);
		width = create_width_string(pf->width.width - nos, ' ');
		ft_putstr(width);
		free(width);
	}
	else if (pf->flag.zero && !pf->flag.minus && !pf->precision.exist)
	{
		width = create_width_string(pf->width.width - nos, '0');
		ft_putstr(width);
		free(width);
		putnbr(d, len);
	}
	return (0);
}

int     	transform_d(t_printf *pf, va_list args, int *len)
{
    int		d;
    int 	nos;

    d = va_arg(args, int);
    nos = number_of_signs(d);
    if (pf->flag.exist)
		transform_d_flag(pf, d, len, nos);
	return (0);
}
