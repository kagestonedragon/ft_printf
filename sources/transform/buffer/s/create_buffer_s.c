/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_buffer_s.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emedea <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/24 19:45:11 by emedea            #+#    #+#             */
/*   Updated: 2019/08/24 19:47:28 by emedea           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdlib.h>

char		*create_buffer_s(t_printf *pf)
{
	char	*buffer;
	int		size;

	size = pf->number_of_signs;
	if(pf->width.exist && pf->width.width > size)
		size = pf->width.width;
	buffer = (char *)malloc(sizeof(char) * (size + 1));
	ft_memset(buffer, '1', size);
	buffer[size] = '\0';
	return (buffer);
}
