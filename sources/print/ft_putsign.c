/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putsign.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emedea <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 18:42:47 by emedea            #+#    #+#             */
/*   Updated: 2019/08/13 19:26:47 by emedea           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putsign(t_printf *pf, int d)
{
	if (pf->flag.plus && d > 0)
	{
		ft_putchar('+');
		return (1);
	}
	if (pf->flag.space && d > 0)
	{
		ft_putchar(' ');
		return (1);
	}
	if (d < 0)
	{
		ft_putchar('-');
		return (1);
	}
	return (0);
}
