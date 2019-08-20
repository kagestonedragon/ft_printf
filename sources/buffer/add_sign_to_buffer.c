/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_sign_to_buffer.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhulk <rhulk@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 21:30:44 by emedea            #+#    #+#             */
/*   Updated: 2019/08/20 14:35:46 by rhulk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		add_sign_to_buffer(char *buffer, t_printf *pf, int sign, int *position)
{
	if (sign == 1)
	{
		if (pf->flag.plus)
		{
			buffer[*position] = '+';
			*position += 1;
			return (0);
		}
		else if (pf->flag.space)
		{
			buffer[*position] = ' ';
			*position += 1;
			return (0);
		}
	}
	else if (sign == 0)
	{
		buffer[*position] = '-';
		*position += 1;
		return (0);
	}
	return (0);
}
