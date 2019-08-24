/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_precision.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emedea <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/22 18:35:58 by emedea            #+#    #+#             */
/*   Updated: 2019/08/22 18:37:07 by emedea           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		parse_precision(t_printf *pf, const char *format, int *i)
{
	if (format[*i] == '.')
	{
		*i += 1;
		save_precision(pf, format, i);
		skip_numbers(format, i);
	}
	return (0);
}
