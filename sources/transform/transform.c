/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   transform.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emedea <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/23 18:05:55 by emedea            #+#    #+#             */
/*   Updated: 2019/08/24 19:27:23 by emedea           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>

int		transform(t_printf *pf, va_list args)
{
	int	length;

	length = 0;
	if (pf->type.exist)
	{
		length = (pf->type.d || pf->type.i) ? choose_length_decimal(pf, args) : length;
		length = (pf->type.f) ? transform_f(pf, args) : length;
		length = (pf->type.c) ? transform_c(pf, args) : length;
		length = (pf->type.s) ? transform_s(pf, args) : length;
        length = (pf->type.x) ? transform_x(pf, args) : length;
        length = (pf->type.hx) ? transform_hx(pf, args) : length;
		length = (pf->type.percent) ? transform_percent() : length;
	}
	return (length);
}
