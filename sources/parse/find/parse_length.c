/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_length.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emedea <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/22 18:38:36 by emedea            #+#    #+#             */
/*   Updated: 2019/08/22 20:21:13 by emedea           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		parse_length(t_printf *pf, const char *format, int *i)
{
	if (ft_strncmp(&format[*i], "hh", 2) == 0)
		return (find_length_hh(pf, i));
	else if (format[*i] == 'h')
		return (find_length_h(pf, i));
	else if (ft_strncmp(&format[*i], "ll", 2) == 0)
		return (find_length_ll(pf, i));
	else if (format[*i] == 'l')
		return (find_length_l(pf, i));
	else if (format[*i] == 'L')
		return (find_length_hl(pf, i));
	return (0);
}
