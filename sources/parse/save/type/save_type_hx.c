/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   save_type_hx.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emedea <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/22 19:26:43 by emedea            #+#    #+#             */
/*   Updated: 2019/08/22 19:27:12 by emedea           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_bool	save_type_hx(t_printf *pf)
{
	pf->type.exist = true;
	pf->type.hx = true;
	return (true);
}
