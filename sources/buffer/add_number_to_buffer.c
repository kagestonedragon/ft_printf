/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_number_to_buffer.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emedea <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/15 14:17:29 by emedea            #+#    #+#             */
/*   Updated: 2019/08/20 13:31:49 by emedea           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int			add_number_to_buffer(char *buffer, int position, int d)
{
	char	*number;

	number = ft_itoa(d);
	while (*number)
		buffer[position++] = *number++;
	return (position);
}
