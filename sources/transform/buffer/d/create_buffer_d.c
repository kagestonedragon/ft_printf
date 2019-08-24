/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_buffer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emedea <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/24 16:26:37 by emedea            #+#    #+#             */
/*   Updated: 2019/08/24 18:52:47 by emedea           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdlib.h>

char		*create_buffer_d(t_printf *pf, int sign)
{
	char	*buffer;
	int		size;

	size = pf->number_of_signs;
	if ((sign && (pf->flag.plus || pf->flag.space)) || (!sign))
		size++;
	if (pf->width.exist && (pf->width.width > size))
		size = pf->width.width;
	if (pf->precision.precision && pf->precision.precision > size)
		size = pf->precision.precision;
	buffer = (char *)malloc(sizeof(char) * (size + 1));
	ft_memset(buffer, '1', size);
	buffer[size] = '\0';
	return (buffer);
}
