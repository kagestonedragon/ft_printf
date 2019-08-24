/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_structs.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emedea <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/22 18:16:42 by emedea            #+#    #+#             */
/*   Updated: 2019/08/24 15:44:27 by emedea           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STRUCTS_H
# define FT_STRUCTS_H

typedef enum{
	false,
	true
}	t_bool;

typedef struct		s_flag{
	t_bool			exist;
	t_bool			minus;
	t_bool			plus;
	t_bool			space;
	t_bool			sharp;
	t_bool			zero;
}					t_flag;

typedef struct		s_width{
	t_bool			exist;
	int				width;
}					t_width;

typedef struct		s_precision{
	t_bool			exist;
	int				precision;
}					t_precision;

typedef struct		s_length{
	t_bool			exist;
	t_bool			hh;
	t_bool			h;
	t_bool			l;
	t_bool			ll;
	t_bool			hl;
}					t_length;

typedef	struct		s_type{
	t_bool			exist;
	t_bool			d;
	t_bool			i;
	t_bool			u;
	t_bool			f;
	t_bool			x;
	t_bool			hx;
	t_bool			o;
	t_bool			s;
	t_bool			c;
	t_bool			p;
	t_bool			percent;
}					t_type;

typedef struct		s_printf{
	int				number_of_signs;
	t_flag			flag;
	t_width			width;
	t_length		length;
	t_precision		precision;
	t_type			type;
}					t_printf;

#endif
