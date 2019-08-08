/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_float.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emedea <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/07 16:44:19 by emedea            #+#    #+#             */
/*   Updated: 2019/08/07 16:46:58 by emedea           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_FLOAT_H
# define FT_FLOAT_H

typedef struct			s_fl{
	int					precision;
	int					sign;
	int					exp;
	long long			integer_part;
	long double			fractional_part;
}						t_fl;

typedef struct			s_parts{
	unsigned long int	mantissa : 64;
	unsigned int		exponent : 15;
	unsigned int		sign : 1;
}						t_parts;

typedef union			u_fl_parts{
	long double			f;
	t_parts				bytes;
}						t_fl_parts;

#endif
