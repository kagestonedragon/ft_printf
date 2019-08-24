/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_sign_to_buffer.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emedea <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/24 14:55:22 by emedea            #+#    #+#             */
/*   Updated: 2019/08/24 16:30:02 by emedea           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		add_sign_to_buffer(char *buffer, t_printf *pf, int *position, int sign)
{
	if (sign == 1)
	{
		if (pf->flag.plus)
		{
			buffer[*position] = '+';
			*position += 1;
		}
		else if (pf->flag.space)
		{
			buffer[*position] = ' ';
			*position += 1;
		}
	}
	else if (sign == 0)
	{
		buffer[*position] = '-';
		*position += 1;
	}
	return (0);
}
