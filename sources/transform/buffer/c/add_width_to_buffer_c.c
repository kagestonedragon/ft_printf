/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_width_to_buffer_c.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emedea <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/24 18:53:50 by emedea            #+#    #+#             */
/*   Updated: 2019/08/24 19:52:45 by emedea           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int			add_width_to_buffer_c(char *buffer, t_printf *pf, int *position)
{
	int		size;
	char	c;

	c = (pf->flag.zero && !pf->flag.minus) ? '0' : ' ';
	size = pf->width.width - pf->number_of_signs;
	if (size < 0)
		return (0);
	while (size--)
	{
		buffer[*position] = c;
		*position += 1;
	}
	return (0);
}
