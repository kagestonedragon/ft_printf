#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "ft_parsing.h"
# include <stdarg.h>

/*
 * Printf
 */
int				ft_printf(const char *format, ...);
int				ft_sprintf(char *buffer, const char *format, ...);
int				ft_dpritnf(int fd, const char *format, ...);

/*
 * Parsing
 */
t_printf		*initialization(int file_descriptor);
int				parsing(int file_descriptor,const char *format, int *i, va_list args);
void			parse_flags(t_printf *pf, const char *format, int *i);
void			parse_width(t_printf *pf, const char *format, int *i, va_list args);
void			parse_precision(t_printf *pf, const char *format, int *i, va_list args);
void			parse_length(t_printf *pf, const char *format, int *i);
void			parse_type(t_printf *pf, const char *format, int *i, va_list args);


/*
 * Buffer
 */
void			add_sign(t_printf *pf);
void			add_precision(t_printf *pf);
void			add_width(t_printf *pf, int character);
void			add_temporary(t_printf *pf);

/*
 * Collecting
 */
void			create_sign(t_printf *pf, int sign);
void			collect_decimal(t_printf *pf, va_list args);
void			collect_unsigned(t_printf *pf, va_list args);
void			collect_hexadecimal(t_printf *pf, va_list args);
void			collect_octaldecimal(t_printf *pf, va_list args);
void			collect_string(t_printf *pf, va_list args);

/*
 * Signed size
 */
int				digits(int n, int base);
int				l_digits(long n, int base);
int				ll_digits(long long n, int base);

/*
 * Unsigned size
 */
int				u_digits(unsigned int n, int base);
int				lu_digits(unsigned long n, int base);
int				llu_digits(unsigned long long n, int base);

/*
 * Unsigned Itoa Base
 */
void			pf_utoa_base(t_printf *pf, unsigned int value, int base);
void			pf_lutoa_base(t_printf *pf, unsigned long value, int base);
void			pf_llutoa_base(t_printf *pf, unsigned long long value, int base);


/*
 * Miscellaneous
 */
int				digits(int n, int base);
int				l_digits(long n, int base);
int				ll_digits(long long n, int base);
int             pf_atoi(const char *str, int *i);
void			pf_itoa(t_printf *pf, int n);
void			pf_litoa(t_printf *pf, long n);
void			pf_llitoa(t_printf *pf, long long n);
void			pf_utoa(t_printf *pf, unsigned int n);
void			pf_lutoa(t_printf *pf, unsigned long n);
void			pf_llutoa(t_printf *pf, unsigned long long n);
void			pf_strcat(t_printf *pf, char *str, int s, int e);
void			string_tolower(char *s);

#endif
