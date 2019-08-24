/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   choose_length_decimal.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emedea <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/24 16:18:28 by emedea            #+#    #+#             */
/*   Updated: 2019/08/24 18:08:46 by emedea           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		choose_length_decimal(t_printf *pf, va_list args)
{
	int	length;

	length = 0;
	if (pf->length.exist)
	{
		length = (pf->length.hh) ? transform_d_hh(pf, args) : length;
		length = (pf->length.h) ? transform_d_h(pf, args) : length;
		length = (pf->length.l) ? transform_d_l(pf, args) : length;
		length = (pf->length.ll) ? transform_d_ll(pf, args) : length;
	}
	else
		length = transform_d(pf, args);
	return (length);
}
