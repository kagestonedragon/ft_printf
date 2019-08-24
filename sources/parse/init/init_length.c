/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_length.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emedea <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/22 18:07:27 by emedea            #+#    #+#             */
/*   Updated: 2019/08/22 18:08:30 by emedea           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	init_length(t_printf *pf)
{
	pf->length.exist = false;
	pf->length.hh = false;
	pf->length.h = false;
	pf->length.l = false;
	pf->length.ll = false;
	pf->length.hl = false;
}
