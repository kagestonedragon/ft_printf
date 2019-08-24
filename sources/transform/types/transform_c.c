/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   transform_c.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emedea <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/24 18:46:18 by emedea            #+#    #+#             */
/*   Updated: 2019/08/24 19:12:27 by emedea           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>
#include <stdlib.h>

char		*collect_char(t_printf *pf, char c)
{
	int		i;
	char	*buffer;

	i = 0;
	buffer = create_buffer_c(pf);
	if (pf->flag.minus)
	{
		ft_strcat_1(buffer, &c);
		i++;
		add_width_to_buffer_c(buffer, pf, &i);
	}
	else
	{
		add_width_to_buffer_c(buffer, pf, &i);
		ft_strcat(buffer, &c);
	}
	return (buffer);
}

int			transform_c(t_printf *pf, va_list args)
{
	char	*buffer;
	char	d;
	int		length;

	pf->number_of_signs = 1;
	d = va_arg(args, int);
	buffer = collect_char(pf, d);
	length = ft_strlen(buffer);
	write(1, buffer, length);
	free(buffer);
	return (length);
}
