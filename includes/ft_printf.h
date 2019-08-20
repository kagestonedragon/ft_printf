/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhulk <rhulk@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/07 16:31:57 by emedea            #+#    #+#             */
/*   Updated: 2019/08/20 15:34:16 by rhulk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "ft_float.h"
# include <stdarg.h>
# include <string.h>

// %[parameter][flags][width][.precision][length]type

typedef enum{
	false,
	true
}	t_bool;

typedef struct	    s_flag{
	t_bool		    exist;
	t_bool		    minus;
	t_bool		    plus;
	t_bool		    space;
	t_bool		    sharp;
	t_bool		    zero;
}				    t_flag;

typedef struct	    s_width{
	t_bool		    exist; 
	int			    width;
}				    t_width;

typedef struct      s_precision{
    t_bool          exist;
    int             precision;
}                   t_precision;

typedef	struct      s_length{
	t_bool		    exist;
	t_bool		    hh;
	t_bool		    h;
	t_bool		    l;
	t_bool		    ll;
	t_bool		    hl;
}				    t_length;

typedef struct	    s_type{
    t_bool          exist;
	t_bool		    d;
	t_bool		    i;
	t_bool		    u;
	t_bool		    f;
	t_bool		    x;
	t_bool		    hx;
	t_bool		    o;
	t_bool		    s;
	t_bool		    c;
	t_bool		    p;
}				    t_type;

typedef struct		s_transform{
	int				width;
	int				precision;
	int				number_of_signs;
}					t_transform;

typedef struct	    s_printf{
	t_flag		    flag;
	t_type		    type;
	t_width		    width;
	t_length        length;
    t_precision     precision;
	t_transform		transform;
}				    t_printf;

// Printf
int                 ft_printf(const char *format, ...);

// Init
t_printf            *init(void);
void                init_flags(t_printf *pf);
void                init_width(t_printf *pf);
void                init_precision(t_printf *pf);
void                init_length(t_printf *pf);
void                init_type(t_printf *pf);

// Parse
int                 parse(const char *format, va_list args, int *i, int *len);
int                 parse_flags(t_printf *pf, const char *format, int *i);
int                 parse_width(t_printf *pf, const char *format, int *i, va_list args);
int                 parse_precision(t_printf *pf, const char *format, int *i);
int                 parse_length(t_printf *pf, const char *format, int *i);
int					parse_type(t_printf *pf, const char *format, int *i);

// Search
t_bool              find_length_hh(t_printf *pf, int *i);
t_bool              find_length_h(t_printf *pf, int *i);
t_bool              find_length_l(t_printf *pf, int *i);
t_bool              find_length_ll(t_printf *pf, int *i);
t_bool              find_length_hl(t_printf *pf, int *i);

t_bool              find_type_d(t_printf *pf, int *i);
t_bool              find_type_i(t_printf *pf, int *i);
t_bool              find_type_u(t_printf *pf, int *i);
t_bool              find_type_f(t_printf *pf, int *i);
t_bool              find_type_x(t_printf *pf, int *i);
t_bool              find_type_hx(t_printf *pf, int *i);
t_bool              find_type_o(t_printf *pf, int *i);
t_bool              find_type_s(t_printf *pf, int *i);
t_bool              find_type_c(t_printf *pf, int *i);
t_bool              find_type_p(t_printf *pf, int *i);

// Save
t_bool              save_flag_minus(t_printf *pf);
t_bool              save_flag_plus(t_printf *pf);
t_bool              save_flag_space(t_printf *pf);
t_bool              save_flag_sharp(t_printf *pf);
t_bool              save_flag_zero(t_printf *pf);

t_bool              save_width_from_string(t_printf *pf, const char *format, int *i);
t_bool              save_width_from_args(t_printf *pf, va_list args);

t_bool              save_precision(t_printf *pf, const char *format, int *i);

t_bool              save_length_hh(t_printf *pf);
t_bool              save_length_h(t_printf *pf);
t_bool              save_length_l(t_printf *pf);
t_bool              save_length_ll(t_printf *pf);
t_bool              save_length_hl(t_printf *pf);

t_bool              save_type_d(t_printf *pf);
t_bool              save_type_i(t_printf *pf);
t_bool              save_type_u(t_printf *pf);
t_bool              save_type_f(t_printf *pf);
t_bool              save_type_x(t_printf *pf);
t_bool              save_type_hx(t_printf *pf);
t_bool              save_type_o(t_printf *pf);
t_bool              save_type_s(t_printf *pf);
t_bool              save_type_c(t_printf *pf);
t_bool              save_type_p(t_printf *pf);

// Find length
int					choose_length_decimal(t_printf *pf, va_list args, int *len);

// Transorm from structures to string
char				*fill_buffer(t_printf *pf, int sign, int d, int nos);
char		*fill_buffer_l(t_printf *pf, int sign, long d, int nos);
int                 transform(t_printf *pf, va_list args, int *len);
int                 transform_d(t_printf *pf, va_list args, int *len);
int					transform_d_hh(t_printf *pf, va_list args, int *len);
int					transform_d_h(t_printf *pf, va_list args, int *len);
int					transform_d_l(t_printf *pf, va_list args, int *len);
int					transform_d_ll(t_printf *pf, va_list args, int *len);
/*int                 transform_i(t_printf *pf, int *len);
int                 transform_u(t_printf *pf, int *len);
int                 transform_f(t_printf *pf, int *len);
int                 transform_x(t_printf *pf, int *len);
int                 transform_hx(t_printf *pf, int *len);
int                 transform_o(t_printf *pf, int *len);
int                 transform_s(t_printf *pf, int *len);
int                 transform_c(t_printf *pf, int *len);
int                 transform_p(t_printf *pf, int *len);*/

// Print
int					ft_putsign(t_printf *pf, int d);
int					ft_putzeros(t_printf *pf, int n);
int					ft_putspaces(t_printf *pf, int d, int n);
void				putnbr(int n, int *len);

// Misc
void                skip_numbers(const char *format, int *i);
void                skip_letters(int *i, int rep);
int                 number_of_signs(int n);
int     			number_of_signs_l(long n);
int     number_of_signs_ll(long long n);
int                 ft_atoi(const char *str);
int                 ft_strncmp(const char *s1, const char *s2, size_t n);
void				ft_putstr(char const *s);
int					ft_strlen(const char *s);
int					ft_putchar(char c);
char				*create_width_string(int size, char c);
void				ft_bzero(void *s, int n);
char				*ft_itoa(int n);
char				*ft_itoa_l(long n);
char			*ft_itoa_ll(long long n);

// Buffer
char				*create_buffer(t_printf *pf, int number_of_signs, int sign);
int					add_number_to_buffer(char *buffer, int *position, int d);
int			add_number_to_buffer_l(char *buffer, int *position, long d);
int			add_number_to_buffer_ll(char *buffer, int *position, long long d);
int					add_precision_to_buffer(char *buffer, t_printf *pf, int number_of_signs, int *position);
int					add_sign_to_buffer(char *buffer, t_printf *pf, int sign, int *position);
int					add_width_to_buffer(char *buffer, t_printf *pf, int nos, int sign, int *position);


// Test
int					test_parse(t_printf *pf);
#endif
