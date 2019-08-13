#include "includes/ft_printf.h"
#include <stdio.h>
int		main(void)
{
	ft_printf("%+-.2d", 5000);
	printf("\n");
	printf("pf = %d\n", printf("%+-.2d\n", 5000));
	return (0);
}
