/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_type.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emedea <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/22 18:09:17 by emedea            #+#    #+#             */
/*   Updated: 2019/08/22 18:10:28 by emedea           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	init_type(t_printf *pf)
{
	pf->type.d = false;
	pf->type.i = false;
	pf->type.u = false;
	pf->type.f = false;
	pf->type.x = false;
	pf->type.hx = false;
	pf->type.o = false;
	pf->type.s = false;
	pf->type.c = false;
	pf->type.p = false;
	pf->type.percent = false;
}
