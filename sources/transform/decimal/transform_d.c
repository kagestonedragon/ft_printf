/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   transform_d.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhulk <rhulk@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 12:33:21 by emedea            #+#    #+#             */
/*   Updated: 2019/08/20 14:49:00 by rhulk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

char		*fill_buffer(t_printf *pf, int sign, int d, int nos)
{
	int		i;
	char	*buffer;

	i = 0;
	buffer = create_buffer(pf, nos, sign);
	if (pf->flag.minus)
	{
		add_sign_to_buffer(buffer, pf, sign, &i);
		add_precision_to_buffer(buffer, pf, nos, &i);
		add_number_to_buffer(buffer, &i, d);
		add_width_to_buffer(buffer, pf, nos, sign, &i);
	}
	else if (pf->flag.zero && !pf->precision.exist)
	{
		add_width_to_buffer(buffer, pf, nos, sign, &i);
		add_number_to_buffer(buffer, &i, d);
	}
	else if (!pf->flag.minus)
	{
		add_width_to_buffer(buffer, pf, nos, sign, &i);
		add_sign_to_buffer(buffer, pf, sign, &i);
		add_precision_to_buffer(buffer, pf, nos, &i);
		add_number_to_buffer(buffer, &i, d);
	}
	return (buffer);
}

int			transform_d(t_printf *pf, va_list args, int *len)
{
	int		d;
	int		nos;
	char	*buffer;

	(void)len;
	d = va_arg(args, int);
	nos = number_of_signs(d);
	buffer = fill_buffer(pf, (d > 0) ? 1 : 0, d, nos);
	printf("jopa%sjopa", buffer);
	return (0);
}
