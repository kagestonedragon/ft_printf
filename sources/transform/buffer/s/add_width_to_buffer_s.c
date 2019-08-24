/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_width_to_buffer_s.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emedea <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/24 19:49:36 by emedea            #+#    #+#             */
/*   Updated: 2019/08/24 19:54:31 by emedea           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int			add_width_to_buffer_s(char *buffer, t_printf *pf, int *position)
{
	int		size;
	char	c;

	c = (pf->flag.zero && !pf->flag.minus) ? '0' : ' ';
	if (pf->precision.exist && pf->precision.precision < pf->number_of_signs)
		size = pf->width.width - pf->precision.precision;
	else
		size = pf->width.width - pf->number_of_signs;
	if (size < 0)
		return (0);
	while (size--)
	{
		buffer[*position] = c;
		*position += 1;
	}
	return (0);
}
