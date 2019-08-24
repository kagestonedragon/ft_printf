/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_width.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emedea <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/22 18:30:22 by emedea            #+#    #+#             */
/*   Updated: 2019/08/22 18:33:58 by emedea           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>

static int	parse_width_from_string(t_printf *pf, const char *format, int *i)
{
	save_width_from_string(pf, format, i);
	skip_numbers(format, i);
	return (0);
}

static int	parse_width_from_args(t_printf *pf, int *i, va_list args)
{
	*i += 1;
	save_width_from_args(pf, args);
	return (0);
}

int			parse_width(t_printf *pf, const char *format, int *i, va_list args)
{
	if (format[*i] == '*')
		parse_width_from_args(pf, i, args);
	else if (format[*i] >= '0' && format[*i] <= '9')
		parse_width_from_string(pf, format, i);
	return (0);
}
