/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_precision_to_buffer.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhulk <rhulk@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 21:38:02 by emedea            #+#    #+#             */
/*   Updated: 2019/08/20 14:36:16 by rhulk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		add_precision_to_buffer(char *buffer, t_printf *pf, int number_of_signs, int *position)
{
	int	i;
	int	count;

	i = 0;
	count = pf->precision.precision - number_of_signs;
	if (pf->precision.exist && count > 0)
	{
		while (i++ < count)
		{
			buffer[*position] = '0';
			*position += 1;
		}
	}
	return (0);
}
