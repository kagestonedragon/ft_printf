/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_string_to_buffer.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emedea <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/24 19:39:14 by emedea            #+#    #+#             */
/*   Updated: 2019/08/24 19:49:01 by emedea           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int			add_string_to_buffer(char *buffer, char *temp_buffer, t_printf *pf, int *position)
{
	int		size;

	size = pf->number_of_signs;
	if (pf->precision.exist && pf->precision.precision < size)
		size = pf->precision.precision;
	while (size--)
	{
		buffer[*position] = *temp_buffer++;
		*position += 1;
	}
	return (0);
}
