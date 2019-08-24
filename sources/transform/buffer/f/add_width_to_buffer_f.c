/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_width_to_buffer.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emedea <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/24 14:58:00 by emedea            #+#    #+#             */
/*   Updated: 2019/08/24 17:05:52 by emedea           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int			add_width_to_buffer_f(char *buffer, t_printf *pf, int *position, int sign)
{
	int		size;
	char	c;

	c = (pf->flag.zero && !pf->flag.minus) ? '0' : ' ';
	size = pf->width.width;
	size -= pf->number_of_signs;
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
