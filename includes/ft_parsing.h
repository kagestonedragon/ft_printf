#ifndef FT_PARSING_H
# define FT_PARSING_H

typedef enum{
    false,
    true
}   t_bool;

typedef struct  s_flag{
    t_bool      exist;
    t_bool      zero;
    t_bool      minus;
    t_bool      plus;
    t_bool      space;
    t_bool      hash;
}               t_flag;

typedef struct  s_width{
    t_bool      exist;
    int			width;
}               t_width;

typedef struct  s_precision{
    t_bool      exist;
	int			precision;
}               t_precision;

typedef struct  s_length{
    t_bool      exist;
    t_bool      hh;
    t_bool      ll;
    t_bool      h;
    t_bool      l;
    t_bool      hl;
}               t_length;

typedef struct  s_sign{
    int			exist;
    int         sign;
}               t_sign;

typedef struct  s_type{
    char        buffer[1024];
    char        temporary_buffer[512];
    int         position;
    int         digits;
    t_sign      sign;
}               t_type;

typedef struct  s_printf{
    int         file_descriptor;
    t_type      type;
    t_flag      flag;
    t_width     width;
    t_precision precision;
    t_length    length;
}               t_printf;

#endif
