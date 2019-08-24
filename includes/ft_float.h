/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_float.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emedea <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/22 17:54:26 by emedea            #+#    #+#             */
/*   Updated: 2019/08/23 19:16:45 by emedea           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_FLOAT_H
# define FT_FLOAT_H

typedef struct			s_fl{
	int					sign;
	int					exponent;
	long long			integer_part;
	long double			fractional_part;
}						t_fl;

typedef struct			s_parts{
	unsigned long int	mantissa : 64;
	unsigned			exponent : 15;
	unsigned			sign : 1;
}						t_parts;

typedef union			u_fl_parts{
	long double			f;
	t_parts				bytes;
}						t_fl_parts;

#endif
