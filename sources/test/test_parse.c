#include "ft_printf.h"
#include <stdio.h>

int		test_flags(t_printf *pf)
{
	if (pf->flags.exist == true)
	{
		if (pf->flags.minus == true)
			printf("Yes flag minus\n");
		if (pf->flags.plus == true)
			printf("Yes flag plus\n");
		if (pf->flags.space == true)
			printf("Yes flag space\n");
		if (pf->flags.sharp == true)
			printf("Yes flag sharp\n");
		if (pf->flags.zero == true)
			printf("Yes flag zero\n");
	}
	else
		printf("No flags\n");
	return (0);
}

int		test_width(t_printf *pf)
{
	if (pf->width.exist == true)
		printf("Yes width - %d\n", pf->width.width);
	else
		printf("No width\n");
	return (0);
}

int		test_precision(t_printf *pf)
{
	if (pf->precision.exist == true)
		printf("Yes precision - %d\n", pf->precision.precision);
	else
		printf("No precision\n");
	return (0);
}

int		test_length(t_printf *pf)
{
	if (pf->length.exist == true)
	{
		if (pf->length.hh == true)
			printf("Yes length hh\n");
		if (pf->length.h == true)
			printf("Yes length h\n");
		if (pf->length.l == true)
			printf("Yes length l\n");
		if (pf->length.ll == true)
			printf("Yes length ll\n");
		if (pf->length.hl == true)
			printf("Yes length L\n");
	}
	else
		printf("No length\n");
	return (0);
}

int		test_type(t_printf *pf)
{
	if (pf->type.exist == true)
	{
		if (pf->type.d == true)
			printf("Yes type d\n");
		if (pf->type.i == true)
			printf("Yes type i\n");
		if (pf->type.u == true)
			printf("Yes type u\n");
		if (pf->type.f == true)
			pritnf("Yes type f\n");
		if (pf->type.x == true)
			printf("Yes type x\n");
		if (pf->type.hx == true)
			printf("Yes type X\n");
		if (pf->type.o == true)
			printf("Yes type o\n");
		if (pf->type.s == true)
			printf("Yes type s\n");
		if (pf->type.c == true)
			printf("Yes type c\n");
		if (pf->type.p == true)
			printf("yes type p\n");
	}
	else
		printf("No type\n");
	return (0);
}

int		test_parse(t_printf *pf)
{
	test_flags(pf);
	test_width(pf);
	test_precision(pf);
	test_length(pf);
	test_type(pf);
	return (0);
}
