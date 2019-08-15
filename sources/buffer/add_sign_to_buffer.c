/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_sign_to_buffer.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emedea <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 21:30:44 by emedea            #+#    #+#             */
/*   Updated: 2019/08/15 15:38:20 by emedea           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		add_sign_to_buffer(char *buffer, t_printf *pf, int sign, int position)
{
	if (sign == 1)
	{
		if (pf->flag.plus)
		{
			buffer[position] = '+';
			return (position + 1);
		}
		else if (pf->flag.space)
		{
			buffer[position] = ' ';
			return (position + 1);
		}
	}
	else if (sign == 0)
	{
		buffer[position] = '-';
		return (position + 1);
	}
	return (position);
}
