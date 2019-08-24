/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_flags.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emedea <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/22 18:06:20 by emedea            #+#    #+#             */
/*   Updated: 2019/08/22 18:07:15 by emedea           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	init_flags(t_printf *pf)
{
	pf->flag.exist = false;
	pf->flag.minus = false;
	pf->flag.plus = false;
	pf->flag.space = false;
	pf->flag.sharp = false;
	pf->flag.zero = false;
}
