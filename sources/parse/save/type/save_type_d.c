/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   save_type_d.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emedea <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/22 19:19:30 by emedea            #+#    #+#             */
/*   Updated: 2019/08/22 19:20:04 by emedea           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_bool	save_type_d(t_printf *pf)
{
	pf->type.exist = true;
	pf->type.d = true;
	return (true);
}