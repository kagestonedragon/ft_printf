/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   transform_d_add.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emedea <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/24 18:03:06 by emedea            #+#    #+#             */
/*   Updated: 2019/08/24 19:04:32 by emedea           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>
#include <stdlib.h>

char                *collect_hexadecimal(t_printf *pf, char *temp_buffer)
{
    int             i;
    char            *buffer;

    i = 0;
    buffer = create_buffer_x(pf);
    if (pf->flag.minus)
    {
        add_precision_to_buffer_d(buffer, pf, &i);
        ft_strcat_1(buffer, temp_buffer);
        i += pf->number_of_signs;
        add_width_to_buffer_x(buffer, pf, &i);
    }
    else if (!pf->flag.minus)
    {
        add_width_to_buffer_x(buffer, pf, &i);
        add_precision_to_buffer_d(buffer, pf, &i);
        ft_strcat_1(buffer, temp_buffer);
        i += pf->number_of_signs;
    }
    else if (pf->flag.zero && !pf->precision.exist)
    {
        add_width_to_buffer_x(buffer, pf, &i);
        ft_strcat_1(buffer, temp_buffer);
    }
    return (buffer);
}

int			        transform_d_l(t_printf *pf, va_list args)
{
	char	        *buffer;
	char	        *temp_buffer;
	long	        d;
	int		        length;

	d = (long)va_arg(args, void*);
	temp_buffer = ft_itoa_l(d);
	pf->number_of_signs = ft_strlen(temp_buffer);
	buffer = collect_decimal(pf, temp_buffer, (d > 0) ? 1 : 0);
	length = ft_strlen(buffer);
	write(1, buffer, length);
	free(temp_buffer);
	free(buffer);
	return (length);
}

int                 transform_x(t_printf *pf, va_list args)
{
    char            *buffer;
    char            *temp_buffer;
    unsigned int    d;
    int             length;

    d = va_arg(args, unsigned int);
    temp_buffer = ft_itoa_base(d, 16);
    pf->number_of_signs = ft_strlen(temp_buffer);
    buffer = collect_hexadecimal(pf, temp_buffer);
    length = ft_strlen(buffer);
    write(1, buffer, length);
    free(temp_buffer);
    free(buffer);
    return (length);
}

int                 transform_hx(t_printf *pf, va_list args)
{
    char            *buffer;
    char            *temp_buffer;
    unsigned int    d;
    int             length;

    d = va_arg(args, unsigned int);
    temp_buffer = ft_itoa_base(d, 16);
    toupper_str(temp_buffer);
    pf->number_of_signs = ft_strlen(temp_buffer);
    buffer = collect_hexadecimal(pf, temp_buffer);
    length = ft_strlen(buffer);
    write(1, buffer, length);
    free(temp_buffer);
    free(buffer);
    return (length);
}
