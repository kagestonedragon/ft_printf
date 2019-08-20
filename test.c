
#include <stdio.h>
#include <stdlib.h>
#include "includes/ft_printf.h"

int		main(void)
{
	ft_printf("%+#-13.4lld", 9223372036854775808);
	printf("\n");
	printf("%+#-13.4lld", 9223372036854775808);
	return (0);
}
