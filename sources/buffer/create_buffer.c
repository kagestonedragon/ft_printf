/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_buffer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emedea <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 20:18:16 by emedea            #+#    #+#             */
/*   Updated: 2019/08/13 21:27:21 by emedea           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char		*create_buffer(t_printf *pf, int numbers_of_signs, int sign)
{
	char	*buffer;
	int		size;

	size = number_of_signs;
	if (pf->width.exist && pf->width.width > size)
		size = pf->width.width;
	if (pf->precision.precision && pf->precision.precision > size)
		size = pf->precision.precision;
	if ((sign && (pf->flag.plus || pf->flag.space)) || (!sign && pf->flag.minus))
		size++;
	buffer = (char *)malloc(sizeof(char) * size + 1);
	ft_bzero(buffer, size + 1);
	return (buffer);
}
