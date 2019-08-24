/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   save_type_percent.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emedea <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/22 19:30:54 by emedea            #+#    #+#             */
/*   Updated: 2019/08/22 19:31:29 by emedea           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_bool	save_type_percent(t_printf *pf)
{
	pf->type.exist = true;
	pf->type.percent = true;
	return (0);
}
