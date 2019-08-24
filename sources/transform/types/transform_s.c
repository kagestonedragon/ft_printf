/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   transform_s.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emedea <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/24 19:29:02 by emedea            #+#    #+#             */
/*   Updated: 2019/08/24 19:53:54 by emedea           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>
#include <stdlib.h>

char		*collect_string(t_printf *pf, char *temp_buffer)
{
	int		i;
	char	*buffer;

	buffer = create_buffer_s(pf);
	if (pf->flag.minus)
	{
		add_string_to_buffer(buffer, temp_buffer, pf, &i);
		add_width_to_buffer_s(buffer, pf, &i);
	}
	else
	{
		add_width_to_buffer_s(buffer, pf, &i);
		add_string_to_buffer(buffer, temp_buffer, pf, &i);
	}
	return (buffer);
}

int			transform_s(t_printf *pf, va_list args)
{
	char	*buffer;
	char	*temp_buffer;
	int		length;

	if(!(temp_buffer = va_arg(args, char*)))
	{
		write(1, "(null)", 6);
		return (6);
	}
	pf->number_of_signs = ft_strlen(temp_buffer);
	buffer = collect_string(pf, temp_buffer);
	length = ft_strlen(buffer);
	write(1, buffer, length);
	free(buffer);
	return (length);
}
