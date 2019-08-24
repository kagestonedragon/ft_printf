/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emedea <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/22 17:55:58 by emedea            #+#    #+#             */
/*   Updated: 2019/08/24 18:34:06 by emedea           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int				parse(const char *format, va_list args, int *i)
{
	t_printf	*pf;

	(void)format;
	(void)args;
	(void)i;
	pf = init();
	parse_flags(pf, format, i);
	parse_width(pf, format, i, args);
	parse_precision(pf, format, i);
	parse_length(pf, format, i);
	parse_type(pf, format, i);
	//test_parse(pf);
	return (transform(pf, args));
}
