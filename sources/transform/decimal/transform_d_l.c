/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   transform_d_l.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhulk <rhulk@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 14:40:42 by rhulk             #+#    #+#             */
/*   Updated: 2019/08/20 15:28:43 by rhulk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

char		*fill_buffer_l(t_printf *pf, int sign, long d, int nos)
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

int		transform_d_l(t_printf *pf, va_list args, int *len)
{
	long	d;
	int		nos;
	char	*buffer;

	(void)len;
	d = (long)va_arg(args, void*);
	nos = number_of_signs_l(d);
	buffer = fill_buffer(pf, (d > 0) ? 1 : 0, d, nos);
	printf("jopa%sjopa", buffer);
	return (0);
}