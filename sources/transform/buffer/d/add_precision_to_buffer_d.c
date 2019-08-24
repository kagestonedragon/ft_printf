/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_precision_to_buffer_d.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emedea <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/24 16:36:18 by emedea            #+#    #+#             */
/*   Updated: 2019/08/24 19:36:19 by emedea           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int			add_precision_to_buffer_d(char *buffer, t_printf *pf, int *position)
{
	 int	count;

	count = pf->precision.precision - pf->number_of_signs;
	if (pf->precision.exist && count > 0)
	{
		while (count--)
		{
			buffer[*position] = '0';
			*position += 1;
		}
	}
	return (0);
}
