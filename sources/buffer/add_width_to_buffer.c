/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_width_to_buffer.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhulk <rhulk@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/15 14:14:30 by emedea            #+#    #+#             */
/*   Updated: 2019/08/20 14:35:48 by rhulk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		add_width_to_buffer(char *buffer, t_printf *pf, int nos, int sign, int *position)
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
		return (0);
	size2 = 0;
	while (size2 < size)
	{
		buffer[*position] = c;
		*position += 1;
		size2++;
	}
	return (0);
}
