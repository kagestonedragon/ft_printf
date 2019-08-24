/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   transform_f.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emedea <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/23 18:09:51 by emedea            #+#    #+#             */
/*   Updated: 2019/08/24 17:03:36 by emedea           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

t_fl			get_pieces(long double f_n)
{
	t_fl_parts	fl;
	t_fl		n;
	int			i;

	fl.f = f_n;
	n.exponent = fl.bytes.exponent - 16383;
	i = ((64 - n.exponent - 1) * (-1)) - 1;
	n.integer_part = 0;
	n.fractional_part = 0;	
	while (++i <= n.exponent)
	{
		if ((fl.bytes.mantissa & 1) && (i >= 0))
			n.integer_part += ft_power(2, i);
		else if ((fl.bytes.mantissa & 1) && (i < 0))
			n.fractional_part += (1.0 / ft_power(2, -i));
		fl.bytes.mantissa >>= 1;
	}
	if (fl.bytes.sign == 1)
		n.integer_part *= (-1);
	return (n);
}

void		round_fractional_part(t_fl *f_n, char *in, int precision)
{
	int		i;

	if (precision == 0 && in[0] > '4' && f_n->integer_part > 0)
		f_n->integer_part++;
	else if (precision == 0 && in[0] > '4' && f_n->integer_part < 0)
		f_n->integer_part--;
	i = precision;
	while (i)
	{
		if (in[i] > '4')
			in[i - 1]++;
		if (in[i - 1] == ':')
		{
			in[i - 1] = '0';
			in[i] = '0';
			in[i - 2]++;
		}
		else
		{
			in[precision] = '\0';
			break;	
		}
	}
}

static char	*get_string_fp(t_fl *f_n, t_printf *pf)
{
	char	*result;
	int		temporary;
	int		i;

	result = (char *)malloc(sizeof(char) * 16);
	ft_bzero(result, 16);
	result[0] = '0';
	i = 0;
	while (i < 15)
	{
		f_n->fractional_part *= 10;
		temporary = (int)f_n->fractional_part;
		f_n->fractional_part -= temporary;
		result[i++] = temporary + '0';
	}
	round_fractional_part(f_n, result, pf->precision.precision);
	return (result);
}

static char	*get_string(t_fl *f_n, t_printf *pf)
{
	char	*result;
	char	*integer_part;
	char	*fractional_part;

	fractional_part = get_string_fp(f_n, pf);
	integer_part = ft_itoa(f_n->integer_part);
	result = (char *)malloc(sizeof(char) * (ft_strlen(integer_part) + ft_strlen(fractional_part) + 2));
	result[0] = '\0';
	ft_strcat(result, integer_part);
	if ((pf->flag.exist && pf->flag.sharp) || (pf->precision.exist && pf->precision.precision))
		ft_strcat(result, ".");
	if (pf->precision.exist && pf->precision.precision)
		ft_strcat(result, fractional_part);
	free(integer_part);
	free(fractional_part);
	return (result);
}

char		*collect_float(t_printf *pf, char *temp_buffer, int sign)
{
	int		i;
	char	*buffer;

	i = 0;
	buffer = create_buffer_f(pf, sign);
	if (pf->flag.minus)
	{
		add_sign_to_buffer(buffer, pf, &i, sign);
		ft_strcat_1(buffer, temp_buffer);
		i += pf->number_of_signs;
		add_width_to_buffer_f(buffer, pf, &i, sign);
	}
	else if (!pf->flag.minus)
	{
		add_width_to_buffer_f(buffer, pf, &i, sign);
		add_sign_to_buffer(buffer, pf, &i, sign);
		ft_strcat_1(buffer, temp_buffer);
	}
	else if (pf->flag.zero && !pf->precision.exist)
	{
		add_width_to_buffer_f(buffer, pf, &i, sign);
		ft_strcat_1(buffer, temp_buffer);
	}
	return (buffer);
}

int			transform_f(t_printf *pf, va_list args)
{
	char	*buffer;
	char	*temp_buffer;
	int		length;
	t_fl	f_n;

	if (!pf->precision.exist)
	{
		pf->precision.exist = true;
		pf->precision.precision = 6;
	}
	f_n = get_pieces((long double)va_arg(args, double));
	temp_buffer = get_string(&f_n, pf);
	pf->number_of_signs = ft_strlen(temp_buffer);
	buffer = collect_float(pf, temp_buffer, (f_n.integer_part > 0) ? 1 : 0);
	length = ft_strlen(buffer);
	write(1, buffer, length);
	free(temp_buffer);
	free(buffer);
	return (length);
}
