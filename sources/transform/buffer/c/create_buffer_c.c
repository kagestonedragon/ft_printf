/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_buffer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emedea <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/24 18:50:51 by emedea            #+#    #+#             */
/*   Updated: 2019/08/24 19:11:27 by emedea           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdlib.h>

char		*create_buffer_c(t_printf *pf)
{
	char	*buffer;
	int		size;

	size = 1;
	if (pf->width.exist)
		size = pf->width.width;
	buffer = (char *)malloc(sizeof(char) * (size + 1));
	ft_memset(buffer, '1', size);
	buffer[size] = '\0';
	return (buffer);
}
