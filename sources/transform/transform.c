 #include "ft_printf.h"

int     transform(t_printf *pf, va_list args, int *len)
{
    if (pf->type.exist == true)
    {
        if (pf->type.d == true)
            transform_d(pf, args, len);
        /*else if (pf->type.i == true)
            transform_i(pf, len);
        else if (pf->type.u == true)
            transform_u(pf, len);
        else if (pf->type.f == true)
            transform_f(pf, len);
        else if (pf->type.x == true)
            transform_x(pf, len);
        else if (pf->type.hx == true)
            transform_hx(pf, len);
        else if (pf->type.o == true)
            transform_o(pf, len);
        else if (pf->type.s == true)
            transform_s(pf, len);
        else if (pf->type.c == true)
            transform_c(pf, len);
        else if (pf->type.p == true)
            transform_p(pf, len);*/
    }
    return (0);
}
