#include "ft_printf.h"

t_bool  find_length_ll(t_printf *pf, int *i)
{
    skip_letters(i, 2);
    return (save_length_ll(pf));
}
