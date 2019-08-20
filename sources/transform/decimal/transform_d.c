/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   transform_d.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emedea <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 12:33:21 by emedea            #+#    #+#             */
/*   Updated: 2019/08/20 13:36:38 by emedea           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char		*fill_buffer(t_printf *pf, int d, int nos)
{
	int		i;
	char	*buffer;

	i = 0;
	buffer = create_buffer(pf, nos, (d > 0) ? 1 : 0);
	if (pf->flag.minus)
	{
		i = add_sign_to_buffer(buffer, (d > 0) ? 1 : 0, i);
		i = add_precision_to_buffer(buffer, pf, nos, i);
		i = add_number_to_buffer(buffer, pf, nos, (d > 0) ? 1 : 0, i);
		i = add_width_to_buffer(buffer, pf, nos, (d > 0) ? 1 : 0, i);
	}
	else if (pf->flag.zero && !pf->precision.exist)
	{
		i = add_width_to_buffer(buffer, pf, nos, (d > 0) ? 1 : 0, i);
		i = add_number_to_buffer(buffer, i, d);
	}
	else if (!pf->flag.minus)
	{
		i = add_width_to_buffer(buffer, pf, nos, (d > 0) ? 1 : 0, i);
		i = add_sign_to_buffer(buffer, pf, (d > 0) ? 1 : 0, i);
		i = add_precision_to_buffer(buffer, pf, nos, i);
		i = add_number_to_buffer(buffer, i, d);
	}
	return (buffer);
}

int			transform_d(t_printf *pf, va_list args, int *len)
{
	int		d;
	i		nos;
	char	*buffer;

	d = va_arg(args, int);
	nos = number_of_signs(d);
	buffer = fill_buffer(pf, d, nos);
}
