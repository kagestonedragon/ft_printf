/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   save_length_l.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emedea <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/22 18:50:54 by emedea            #+#    #+#             */
/*   Updated: 2019/08/22 18:51:21 by emedea           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_bool	save_length_l(t_printf *pf)
{
	pf->length.exist = true;
	pf->length.l = true;
	return (true);
}