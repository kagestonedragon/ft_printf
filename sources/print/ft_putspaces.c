/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putspaces.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emedea <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 18:39:23 by emedea            #+#    #+#             */
/*   Updated: 2019/08/13 20:25:10 by emedea           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_putspaces(t_printf *pf, int d, int n)
{
	int	i;

	(void)n;
	if (((pf->flag.plus || pf->flag.space) && d > 0) || (pf->flag.minus && d < 0))
		pf->width.width--;
	if (!pf->width.exist || n < 0)
		return (0);
	else
	{
		i = -1;
		while (++i < pf->width.width - pf->precision.precision - 1)
			ft_putchar(' ');
	}
	return (i);
}
