/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   save_width.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emedea <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/22 18:34:08 by emedea            #+#    #+#             */
/*   Updated: 2019/08/22 18:35:29 by emedea           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_bool	save_width_from_string(t_printf *pf, const char *format, int *i)
{
	pf->width.exist = true;
	pf->width.width = ft_atoi(&format[*i]);
	return (true);
}

t_bool	save_width_from_args(t_printf *pf, va_list args)
{
	pf->width.exist = true;
	pf->width.width = va_arg(args, int);
	return (true);
}
