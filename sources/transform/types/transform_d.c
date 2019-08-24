/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   transform_d.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emedea <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/24 16:14:24 by emedea            #+#    #+#             */
/*   Updated: 2019/08/24 19:37:33 by emedea           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdlib.h>
#include <unistd.h>

char			*collect_decimal(t_printf *pf, char *temp_buffer, int sign)
{
	int			i;
	char		*buffer;

	i = 0;
	buffer = create_buffer_d(pf, sign);
	if (pf->flag.minus)
	{
		add_sign_to_buffer(buffer, pf, &i, sign);
		add_precision_to_buffer_d(buffer, pf, &i);
		ft_strcat_1(buffer, temp_buffer);
		i += pf->number_of_signs;
		add_width_to_buffer_d(buffer, pf, &i, sign);
	}
	else if (!pf->flag.minus)
	{
		add_width_to_buffer_d(buffer, pf, &i, sign);
		add_sign_to_buffer(buffer, pf, &i, sign);
		add_precision_to_buffer_d(buffer, pf, & i);
		ft_strcat_1(buffer, temp_buffer);
		i += pf->number_of_signs;
	}
	else if (pf->flag.zero && !pf->precision.exist)
	{
		add_width_to_buffer_d(buffer, pf, &i, sign);
		ft_strcat_1(buffer, temp_buffer);
		i = pf->number_of_signs;
	}
	return (buffer);
}

int				transform_d(t_printf *pf, va_list args)
{
	char	*buffer;
	char	*temp_buffer;
	int		d;
	int		length;

	d = va_arg(args, int);
	temp_buffer = ft_itoa(d);
	pf->number_of_signs = ft_strlen(temp_buffer);
	buffer = collect_decimal(pf, temp_buffer, (d > 0) ? 1 : 0);
	length = ft_strlen(buffer);
	write(1, buffer, length);
	free(temp_buffer);
	free(buffer);
	return (length);
}

int				transform_d_hh(t_printf *pf, va_list args)
{
	char	*buffer;
	char	*temp_buffer;
	short	d;
	int		length;

	d = (char)va_arg(args, void*);
	temp_buffer = ft_itoa((int)d);
	pf->number_of_signs = ft_strlen(temp_buffer);
	buffer = collect_decimal(pf, temp_buffer, (d > 0) ? 1 : 0);
	length = ft_strlen(buffer);
	write(1, buffer, length);
	free(temp_buffer);
	free(buffer);
	return (length);
}

int				transform_d_h(t_printf *pf, va_list args)
{
	char		*buffer;
	char		*temp_buffer;
	short		d;
	int			length;

	d = (unsigned short)va_arg(args, void*);
	temp_buffer = ft_itoa((int)d);
	pf->number_of_signs = ft_strlen(temp_buffer);
	buffer = collect_decimal(pf, temp_buffer, (d > 0) ? 1 : 0);
	length = ft_strlen(buffer);
	write(1, buffer, length);
	free(temp_buffer);
	free(buffer);
	return (length);
}

int				transform_d_ll(t_printf *pf, va_list args)
{
	char		*buffer;
	char		*temp_buffer;
	long long	d;
	int			length;

	d = (long long)va_arg(args, void*);
	temp_buffer = ft_itoa_ll((int)d);
	pf->number_of_signs = ft_strlen(temp_buffer);
	buffer = collect_decimal(pf, temp_buffer, (d > 0) ? 1 : 0);
	length = ft_strlen(buffer);
	write(1, buffer, length);
	free(temp_buffer);
	free(buffer);
	return (length);
}
