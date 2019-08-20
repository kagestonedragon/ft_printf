/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_width_to_buffer.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emedea <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/15 14:14:30 by emedea            #+#    #+#             */
/*   Updated: 2019/08/20 13:24:11 by emedea           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		add_width_to_buffer(char *buffer, t_printf *pf, int nos, int sign, int position)
{
	int	size;
	int	size2;
	char	c;

	size = 0;
	if (pf->flag.zero && !pf->precision.exist)
		c = '0';
	else
		c = ' ';
	if (pf->width.exist)
		size = pf->width.width;
	if (pf->precision.exist)
	{
		if (nos > pf->precision.precision)
			size -= nos;
		else
			size -= pf->precision.precision;
	}
	if ((sign && (pf->flag.plus || pf->flag.space)) || (!sign))
		size--;
	if (size < 0)
		return (position);
	size2 = 0;
	while (size2 < size)
	{
		buffer[position] = c;
		position++;
		size2++;
	}
	return (position);
}
