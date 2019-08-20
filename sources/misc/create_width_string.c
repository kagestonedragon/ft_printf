/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_string.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emedea <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 16:16:45 by emedea            #+#    #+#             */
/*   Updated: 2019/08/12 16:39:35 by emedea           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_printf.h"

static int	fill_space(char *in, int size, char c)
{
	int		i;

	i = -1;
	while (++i < size)
		in[i] = c;
	return (0);
}

char		*create_width_string(int size, char c)
{
	char	*out;

	out = (char *)malloc(sizeof(char) * (size + 1));
	out[size] = '\0';
	fill_space(out, size, c);
	ft_putstr(out);
	return (out);
}
