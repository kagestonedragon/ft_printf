/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emedea <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/22 18:05:08 by emedea            #+#    #+#             */
/*   Updated: 2019/08/23 16:44:27 by emedea           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdlib.h>

t_printf		*init(void)
{
	t_printf	*pf;
	pf = (t_printf *)malloc(sizeof(t_printf));
	init_flags(pf);
	init_width(pf);
	init_precision(pf);
	init_type(pf);
	init_length(pf);
	return (pf);
}
