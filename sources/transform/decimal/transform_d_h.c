/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   transform_d_h.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhulk <rhulk@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 14:56:52 by rhulk             #+#    #+#             */
/*   Updated: 2019/08/20 15:25:41 by rhulk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int		transform_d_h(t_printf *pf, va_list args, int *len)
{
	int		d;
	int		nos;
	char	*buffer;

	(void)len;
	d = (unsigned short)va_arg(args, void*);
	nos = number_of_signs((int)d);
	buffer = fill_buffer(pf, (d > 0) ? 1 : 0, (int)d, nos);
	printf("jopa%sjopa", buffer);
	return (0);
}