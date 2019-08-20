/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_precision_to_buffer.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emedea <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 21:38:02 by emedea            #+#    #+#             */
/*   Updated: 2019/08/20 13:08:51 by emedea           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		add_precision_to_buffer(char *buffer, t_printf *pf, int number_of_signs, int position)
{
	int	i;
	int	count;

	i = 0;
	count = pf->precision.precision - number_of_signs;
	if (pf->precision.exist && count > 0)
		while (i++ < count)
			buffer[position++] = '0';
	return (position);
}
