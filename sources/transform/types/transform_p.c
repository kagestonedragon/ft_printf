/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   transform_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emedea <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/25 15:40:37 by emedea            #+#    #+#             */
/*   Updated: 2019/08/25 15:59:52 by emedea           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>
#include <stdlib.h>

char				*get_full_address(char *temp_buffer)
{
	char			*result;

	result = (char *)malloc(sizeof(char) * (ft_strlen(temp_buffer) + 3));
	result[0] = '\0';
	ft_strcat(result, "0x");
	ft_strcat(result, temp_buffer);
	free(temp_buffer);
	return (result);
}

int					transform_p(t_printf *pf, va_list args)
{
	char			*buffer;
	char			*temp_buffer;
	unsigned long	addr;
	int				length;

	addr = (unsigned long)va_arg(args, void*);
	temp_buffer = get_full_address(ft_itoa_base_ul(addr, 16));
	pf->number_of_signs = ft_strlen(temp_buffer);
	buffer = collect_hexadecimal(pf, temp_buffer);
	length = ft_strlen(buffer);
	write(1, &buffer, length);
	free(temp_buffer);
	free(buffer);
	return (length);
}
