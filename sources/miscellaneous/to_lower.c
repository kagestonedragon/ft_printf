#include "ft_printf.h"

int		to_lower(t_printf *p)
{
	int	i;

	if (p->type == TYPE_LX || p->type == TYPE_P)
	{
		i = -1;
		while (p->arg.value[++i])
			if (p->arg.value[i] >= 'A' && p->arg.value[i] <= 'Z')
				p->arg.value[i] += 32;
	}
	return (0);
}
