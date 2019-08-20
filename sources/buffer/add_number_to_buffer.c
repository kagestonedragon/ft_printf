/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_number_to_buffer.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhulk <rhulk@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/15 14:17:29 by emedea            #+#    #+#             */
/*   Updated: 2019/08/20 15:33:40 by rhulk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int			add_number_to_buffer_l(char *buffer, int *position, long d)
{
	char	*number;

	number = ft_itoa_l(d);
	while (*number)
	{
		buffer[*position] = *number++;
		*position += 1;
	}
	return (0);
}

int			add_number_to_buffer_ll(char *buffer, int *position, long long d)
{
	char	*number;

	number = ft_itoa_ll(d);
	while (*number)
	{
		buffer[*position] = *number++;
		*position += 1;
	}
	return (0);
}

int			add_number_to_buffer(char *buffer, int *position, int d)
{
	char	*number;

	number = ft_itoa(d);
	while (*number)
	{
		buffer[*position] = *number++;
		*position += 1;
	}
	return (0);
}
