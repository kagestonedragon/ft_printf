/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   choose_length_decimal.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhulk <rhulk@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 11:38:21 by emedea            #+#    #+#             */
/*   Updated: 2019/08/20 15:38:28 by rhulk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int		choose_length_decimal(t_printf *pf, va_list args, int *len)
{
	if (pf->length.exist)
	{
		(pf->length.hh) ? transform_d_hh(pf, args, len) : 0;
		(pf->length.h) ? transform_d_h(pf, args, len) : 0;
		(pf->length.l) ? transform_d_l(pf, args, len) : 0;
		(pf->length.ll) ? printf("JOPAJPA") : 0;
		(pf->length.ll) ? transform_d_ll(pf, args, len) : 0;
	}
	else
		transform_d(pf, args, len);
	return (0);
}
