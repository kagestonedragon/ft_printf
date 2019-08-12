#include "includes/ft_printf.h"
#include <stdio.h>
int		main(void)
{
	ft_printf("%010d", 5);
	printf("\n");
	printf("%010d\n", 5);
	return (0);
}
