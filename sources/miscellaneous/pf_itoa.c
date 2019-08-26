#include "ft_printf.h"
#include <stdio.h>
# define LLONG_MIN	(-0x7fffffffffffffffLL-1)	

int	digits(int n, int base)
{
	int		i;

	i = 1;
	while (n /= base)
		i++;
	return (i);
}

int	l_digits(long n, int base)
{
	int		i;

	i = 1;
	while (n /= base)
		i++;
	return (i);
}

int	ll_digits(long long n, int base)
{
	int		i;

	i = 1;
	while (n /= base)
		i++;
	return (i);
}

void		pf_litoa(t_printf *pf, long n)
{
	int		i;
	
	if (n < 0)
	{
		create_sign(pf, 0);
		n = -n;
	}
	else
		create_sign(pf, 1);
	if (n == 0)
		pf->type.temporary_buffer[pf->type.digits] = '0';
	i = (pf->type.digits = l_digits(n, 10));
	while (n)
	{
		pf->type.temporary_buffer[--i] = (n % 10) + '0';
		n /= 10;
	}
	pf->type.temporary_buffer[pf->type.digits] = '\0';
}

void		pf_llitoa(t_printf *pf, long long n)
{
	int		i;

	if (n < 0)
	{
		create_sign(pf, 0);
		if (n == LLONG_MIN)
		{
			pf_strcat(pf, "9223372036854775808", -1, 19);
			return ;
		}
		n = -n;
	}
	else
		create_sign(pf, 1);
	if (n == 0)
		pf->type.temporary_buffer[pf->type.digits] = '0';
	i = (pf->type.digits = ll_digits(n, 10));
	while (n)
	{
		pf->type.temporary_buffer[--i] = (n % 10) + '0';
		n /= 10;
	}
	pf->type.temporary_buffer[pf->type.digits] = '\0';
}

void		pf_itoa(t_printf *pf, int n)
{
	int		i;

	if (n < 0)
	{
		create_sign(pf, 0);
		if (n == -2147483648)
		{
			pf_strcat(pf, "2147483648", -1, 10);
			return ;
		}
		n = -n;
	}
	else
		create_sign(pf, 1);
	if (n == 0)
		pf->type.temporary_buffer[pf->type.digits] = '0';
	i = (pf->type.digits = digits(n, 10));
	while (n)
	{
		pf->type.temporary_buffer[--i] = (n % 10) + '0';
		n /= 10;
	}
	pf->type.temporary_buffer[pf->type.digits] = '\0';
}

int			u_digits(unsigned int n, int base)
{
	int		i;

	i = 1;
	while (n /= base)
		i++;
	return (i);
}

int			lu_digits(unsigned long n, int base)
{
	int		i;

	i = 1;
	while (n /= base)
		i++;
	return (i);
}

int			llu_digits(unsigned long long n, int base)
{
	int		i;

	i = 1;
	while (n /= base)
		i++;
	return (i);
}

void		pf_utoa(t_printf *pf, unsigned int n)
{
	int		i;

	if (n == 0)
		pf->type.temporary_buffer[pf->type.digits] = '0';
	i = (pf->type.digits = u_digits(n, 10));
	while (n)
	{
		pf->type.temporary_buffer[--i] = (n % 10) + '0';
		n /= 10;
	}
	pf->type.temporary_buffer[pf->type.digits] = '\0';
}

void		pf_lutoa(t_printf *pf, unsigned long n)
{
	int		i;

	if (n == 0)
		pf->type.temporary_buffer[pf->type.digits] = '0';
	i = (pf->type.digits = lu_digits(n, 10));
	while (n)
	{
		pf->type.temporary_buffer[--i] = (n % 10) + '0';
		n /= 10;
	}
	pf->type.temporary_buffer[pf->type.digits] = '\0';
}

void		pf_llutoa(t_printf *pf, unsigned long long n)
{
	int		i;

	if (n == 0)
		pf->type.temporary_buffer[pf->type.digits] = '0';
	i = (pf->type.digits = llu_digits(n, 10));
	while (n)
	{
		pf->type.temporary_buffer[--i] = (n % 10) + '0';
		n /= 10;
	}
	pf->type.temporary_buffer[pf->type.digits] = '\0';
}
