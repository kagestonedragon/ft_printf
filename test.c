#include "includes/ft_printf.h"
#include <stdio.h>

int		main(void)
{
	ft_printf("%0.2X\n", 2147483647);
	printf("%0.2X", 2147483647);
	return (0);
}
