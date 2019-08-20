/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   transform_d_hh.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhulk <rhulk@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 14:40:42 by rhulk             #+#    #+#             */
/*   Updated: 2019/08/20 14:49:18 by rhulk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>


int		transform_d_hh(t_printf *pf, va_list args, int *len)
{
	int		d;
	int		nos;
	char	*buffer;

	(void)len;
	d = (char)va_arg(args, void*);
	nos = number_of_signs((int)d);
	buffer = fill_buffer(pf, (d > 0) ? 1 : 0, (int)d, nos);
	printf("jopa%sjopa", buffer);
	return (0);
}