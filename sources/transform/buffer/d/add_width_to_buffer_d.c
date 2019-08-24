/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_width_to_buffer.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emedea <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/24 16:31:28 by emedea            #+#    #+#             */
/*   Updated: 2019/08/24 18:59:21 by emedea           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int			add_width_to_buffer_d(char *buffer, t_printf *pf, int *position, int sign)
{
	int		size;
	char	c;

	c = (pf->flag.zero && !pf->precision.exist) ? '0' : ' ';
	size = pf->width.width;
	if (pf->precision.exist)
		size -= (pf->number_of_signs > pf->precision.precision) ? pf->number_of_signs : pf->precision.precision;
	if ((sign && (pf->flag.plus || pf->flag.space)) || (!sign))
		size--;
	if (size < 0)
		return (0);
	while (size--)
	{
		buffer[*position] = c;
		*position += 1;
	}
	return (0);
}
