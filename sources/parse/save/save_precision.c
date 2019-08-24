/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   save_precision.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emedea <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/22 18:37:26 by emedea            #+#    #+#             */
/*   Updated: 2019/08/22 18:38:10 by emedea           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_bool	save_precision(t_printf *pf, const char *format, int *i)
{
	pf->precision.exist = true;
	pf->precision.precision = ft_atoi(&format[*i]);
	return (true);
}
