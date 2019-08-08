#include "ft_printf.h"

t_bool  save_flag_minus(t_printf *pf)
{
    pf->flag.exist = true;
    pf->flag.minus = true;
    return (true);
}

t_bool  save_flag_plus(t_printf *pf)
{
    pf->flag.exist = true;
    pf->flag.plus = true;
    return (true);
}

t_bool  save_flag_space(t_printf *pf)
{
    pf->flag.exist = true;
    pf->flag.space = true;
    return (true);
}

t_bool  save_flag_sharp(t_printf *pf)
{
    pf->flag.exist = true;
    pf->flag.sharp = true;
    return (true);
}

t_bool  save_flag_zero(t_printf *pf)
{
    pf->flag.exist = true;
    pf->flag.zero = true;
    return (true);
}
