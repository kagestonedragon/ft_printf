/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_flags.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emedea <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/22 18:23:12 by emedea            #+#    #+#             */
/*   Updated: 2019/08/22 18:30:16 by emedea           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static t_bool	find_flag(t_printf *pf, char c)
{
	if (c == '-')
		return (save_flag_minus(pf));
	else if (c == '+')
		return (save_flag_plus(pf));
	else if (c == ' ')
		return (save_flag_space(pf));
	else if (c == '#')
		return (save_flag_sharp(pf));
	else if (c == '0')
		return (save_flag_zero(pf));
	return (false);
}

int				parse_flags(t_printf *pf, const char *format, int *i)
{
	*i += 1;
	while (find_flag(pf, format[*i]))
		*i += 1;
	return (0);
}
