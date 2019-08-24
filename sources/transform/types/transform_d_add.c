/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   transform_d_add.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emedea <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/24 18:03:06 by emedea            #+#    #+#             */
/*   Updated: 2019/08/24 19:04:32 by emedea           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>
#include <stdlib.h>

int			transform_d_l(t_printf *pf, va_list args)
{
	char	*buffer;
	char	*temp_buffer;
	long	d;
	int		length;

	d = (long)va_arg(args, void*);
	temp_buffer = ft_itoa_l(d);
	pf->number_of_signs = ft_strlen(temp_buffer);
	buffer = collect_decimal(pf, temp_buffer, (d > 0) ? 1 : 0);
	length = ft_strlen(buffer);
	write(1, buffer, length);
	free(temp_buffer);
	free(buffer);
	return (length);
}
