#include "includes/ft_printf.h"
#include <stdio.h>
int		main(void)
{
	ft_printf("%-+ 10.5d, %024d\n", 5000, 2);
	//printf("\n");
	printf("%-+ 10.5d, %024d\n", 5000, 2);
	return (0);
}
