#include "includes/ft_printf.h"
#include <stdio.h>
#include <stdlib.h>
#include <float.h>
#include <unistd.h>

int main(void)
{
	int	c1;
	int	c2;
	long double min = LDBL_MAX;

    c1 = ft_printf("%c", 0);
	printf("\n");
	c2 = printf("%c", 0);
	printf("\n\nf0t = %d\nor = %d", c1, c2);
    return (0);
}
