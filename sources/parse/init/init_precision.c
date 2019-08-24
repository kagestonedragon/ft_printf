/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_precision.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emedea <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/22 18:08:41 by emedea            #+#    #+#             */
/*   Updated: 2019/08/23 16:51:47 by emedea           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	init_precision(t_printf *pf)
{
	pf->precision.exist = false;
	pf->precision.precision = 0;
}
