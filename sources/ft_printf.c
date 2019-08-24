/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emedea <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/22 17:34:47 by emedea            #+#    #+#             */
/*   Updated: 2019/08/24 18:36:30 by emedea           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>
#include <unistd.h>

int			ft_printf(const char *format, ...)
{
	va_list	args;
	int		length;
	int		i;

	i = -1;
	length = 0;
	va_start(args, format);
	while (format[++i])
	{
		if (format[i] == '%')
			length += parse(format, args, &i) - 1;
		else
			write(1, &format[i], 1);
		length++;
	}
	va_end(args);
	return (length);
}
