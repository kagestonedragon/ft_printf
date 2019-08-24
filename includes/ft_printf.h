/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emedea <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/22 17:37:50 by emedea            #+#    #+#             */
/*   Updated: 2019/08/24 19:53:14 by emedea           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "ft_structs.h"
# include "ft_float.h"
# include <stdarg.h>
# include <string.h>

/*
 * MAIN
 */
int			ft_printf(const char *format, ...);

/*
 * PARSE
 */
int			parse(const char *format, va_list args, int *i);
int			parse_flags(t_printf *pf, const char *format, int *i);
int			parse_length(t_printf *pf, const char *format, int *i);
int			parse_precision(t_printf *pf, const char *format, int *i);
int			parse_width(t_printf *pf, const char *format, int *i, va_list args);
int			parse_type(t_printf *pf, const char *format, int *i);

t_bool		find_length_h(t_printf *pf, int *i);
t_bool		find_length_hh(t_printf *pf, int *i);
t_bool		find_length_hl(t_printf *pf, int *i);
t_bool		find_length_l(t_printf *pf, int *i);
t_bool		find_length_ll(t_printf *pf, int *i);

t_bool		find_type_c(t_printf *pf, int *i);
t_bool		find_type_d(t_printf *pf, int *i);
t_bool		find_type_f(t_printf *pf, int *i);
t_bool		find_type_hx(t_printf *pf, int *i);
t_bool		find_type_i(t_printf *pf, int *i);
t_bool		find_type_o(t_printf *pf, int *i);
t_bool		find_type_p(t_printf *pf, int *i);
t_bool		find_type_percent(t_printf *pf, int *i);
t_bool		find_type_s(t_printf *pf, int *i);
t_bool		find_type_u(t_printf *pf, int *i);
t_bool		find_type_x(t_printf *pf, int *i);

t_bool		save_precision(t_printf *pf, const char *format, int *i);
t_bool		save_width_from_string(t_printf *pf, const char *format, int *i);
t_bool		save_width_from_args(t_printf *pf, va_list args);

t_bool		save_flag_minus(t_printf *pf);
t_bool		save_flag_plus(t_printf *pf);
t_bool		save_flag_sharp(t_printf *pf);
t_bool		save_flag_space(t_printf *pf);
t_bool		save_flag_zero(t_printf *pf);

t_bool		save_length_h(t_printf *pf);
t_bool		save_length_hh(t_printf *pf);
t_bool		save_length_hl(t_printf *pf);
t_bool		save_length_l(t_printf *pf);
t_bool		save_length_ll(t_printf *pf);

t_bool		save_type_c(t_printf *pf);
t_bool		save_type_d(t_printf *pf);
t_bool		save_type_f(t_printf *pf);
t_bool		save_type_hx(t_printf *pf);
t_bool		save_type_i(t_printf *pf);
t_bool		save_type_o(t_printf *pf);
t_bool		save_type_p(t_printf *pf);
t_bool		save_type_percent(t_printf *pf);
t_bool		save_type_s(t_printf *pf);
t_bool		save_type_u(t_printf *pf);
t_bool		save_type_x(t_printf *pf);

/*
 * Init
 */
t_printf	*init(void);
void		init_flags(t_printf *pf);
void		init_width(t_printf *pf);
void		init_type(t_printf *pf);
void		init_length(t_printf *pf);
void		init_precision(t_printf *pf);

/*
 * Transform
 */
int			transform(t_printf *pf, va_list args);
int			transform_f(t_printf *pf, va_list args);
char		*collect_decimal(t_printf *pf, char *temp_buffer, int sign);
int			transform_d(t_printf *pf, va_list args);
int			transform_d_hh(t_printf *pf, va_list args);
int			transform_d_h(t_printf *pf, va_list args);
int			transform_d_ll(t_printf *pf, va_list args);
int			transform_d_l(t_printf *pf, va_list args);
int			transform_percent(void);
int			transform_c(t_printf *pf, va_list args);
int			transform_s(t_printf *pf, va_list args);
int			choose_length_decimal(t_printf *pf, va_list args);

/*
 * Misc
 */
int			ft_atoi(const char *str);
int			ft_strncmp(const char *s1, const char *s2, size_t n);
int			skip_numbers(const char *format, int *i);
char		*ft_itoa(int n);
char		*ft_itoa_ll(long long n);
char		*ft_itoa_l(long n);
char		*ft_strcat(char *s1, const char *s2);
char		*ft_strcat_1(char *s1, const char *s2);
long long	ft_power(int n, int power);
void		ft_bzero(void *s, size_t n);
size_t		ft_strlen(const char *s);
void		*ft_memset(void *b, int c, size_t len);

/*
 * Buffer
 */
int			add_sign_to_buffer(char *buffer, t_printf *pf, int *position, int sign);

char		*create_buffer_f(t_printf *pf, int sign);
int			add_width_to_buffer_f(char *buffer, t_printf *pf, int *position, int sign);

char		*create_buffer_d(t_printf *pf, int sign);
int			add_width_to_buffer_d(char *buffer, t_printf *pf, int *position, int sign);
int			add_precision_to_buffer_d(char *buffer, t_printf *pf, int *position);

char		*create_buffer_c(t_printf *pf);
int			add_width_to_buffer_c(char *buffer, t_printf *pf, int *position);

char		*create_buffer_s(t_printf *pf);
int			add_string_to_buffer(char *buffer, char *temp_buffer, t_printf *pf, int *position);
int			add_width_to_buffer_s(char *buffer, t_printf *pf, int *position);

int			test_parse(t_printf *pf);		

#endif
