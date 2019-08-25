#include "includes/ft_printf.h"
#include <stdio.h>
#include <stdlib.h>

int		main(void)
{
	int	*jopa;

	jopa = (int *)malloc(sizeof(int));
	ft_printf("%p\n", jopa);
	printf("%p", jopa);
	return (0);
}
