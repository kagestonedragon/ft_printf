/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   save_type_i.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emedea <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/22 19:27:18 by emedea            #+#    #+#             */
/*   Updated: 2019/08/22 19:27:43 by emedea           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_bool	save_type_i(t_printf *pf)
{
	pf->type.exist = true;
	pf->type.i = true;
	return (true);
}