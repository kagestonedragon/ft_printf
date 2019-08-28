#ifndef STRUCTURES_H
# define STRUCTURES_H

typedef enum{
    false,
    true
}   t_bool;

typedef struct      s_sign{
    char            *value;
    int             length;
}                   t_sign;

typedef struct      s_flag{
    t_bool          minus;
    t_bool          plus;
    t_bool          space;
    t_bool          zero;
    t_bool          hash;
}                   t_flag;

typedef struct      s_arg{
    char            *value;
    int             length;
    int             base;
}                   t_arg;

typedef struct      s_printf{
    t_flag          flag;
    int             width;
    int             length;
    int             precision;
    int             type;
    t_sign          sign;
    t_arg           arg;
}                   t_printf;

#endif
