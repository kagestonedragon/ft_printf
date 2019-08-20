/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putzeros.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emedea <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 18:40:36 by emedea            #+#    #+#             */
/*   Updated: 2019/08/13 19:18:52 by emedea           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_putzeros(t_printf *pf, int n)
{
	int	i;

	if (!pf->precision.exist || n < 0)
		return (0);
	else
	{
		i = -1;
		while (++i < n)
			ft_putchar('0');
	}
	return (i);
}
