/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_buffer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emedea <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/23 19:58:48 by emedea            #+#    #+#             */
/*   Updated: 2019/08/24 17:05:59 by emedea           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdlib.h>

char		*create_buffer_f(t_printf *pf, int sign)
{
	char	*buffer;
	int		size;

	size = pf->number_of_signs;
	if ((sign && (pf->flag.plus || pf->flag.space)) || (!sign))
		size++;
	if (pf->width.exist && (pf->width.width > size))
		size = pf->width.width;
	buffer = (char *)malloc(sizeof(char) * (size + 1));
	ft_memset(buffer, '1', size);
	buffer[size] = '\0';
	return (buffer);
}
