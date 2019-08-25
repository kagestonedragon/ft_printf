/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_type.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emedea <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/22 18:53:35 by emedea            #+#    #+#             */
/*   Updated: 2019/08/25 15:56:19 by emedea           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	parse_type(t_printf *pf, const char *format, int *i)
{
	if (format[*i] == 'd')
		return (save_type_d(pf));
	else if (format[*i] == 'i')
		return (save_type_i(pf));
	else if (format[*i] == 'u')
		return (save_type_u(pf));
	else if (format[*i] == 'f')
		return (save_type_f(pf));
	else if (format[*i] == 'x')
		return (save_type_x(pf));
	else if (format[*i] == 'X')
		return (save_type_hx(pf));
	else if (format[*i] == 'o')
		return (save_type_o(pf));
	else if (format[*i] == 's')
		return (save_type_s(pf));
	else if (format[*i] == 'c')
		return (save_type_c(pf));
	else if (format[*i] == 'p')
		return (save_type_p(pf));
	else if (format[*i] == '%')
		return (save_type_percent(pf));
	return (0);
}
