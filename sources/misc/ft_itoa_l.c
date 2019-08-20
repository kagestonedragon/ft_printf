/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_l.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhulk <rhulk@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/25 18:43:03 by emedea            #+#    #+#             */
/*   Updated: 2019/08/20 15:35:00 by rhulk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int		sym_counter1(long n)
{
	int			result;

	result = 1;
	while (n /= 10)
		result++;
	return (result);
}

char			*ft_itoa_l(long n)
{
	char		*result;
	int			i;

	if (!(result = (char *)malloc(sizeof(char) * (sym_counter1(n) + 1))))
		return (NULL);
	i = sym_counter1(n);
	result[i--] = '\0';
	if (!n)
		result[0] = '0';
	while (n)
	{
		if (n > 0)
			result[i--] = (n % 10) + '0';
		else
			result[i--] = (-(n % 10)) + '0';
		n /= 10;
	}
	return (result);
}

static int		sym_counter2(long long n)
{
	int			result;

	result = 1;
	while (n /= 10)
		result++;
	return (result);
}

char			*ft_itoa_ll(long long n)
{
	char		*result;
	int			i;

	if (!(result = (char *)malloc(sizeof(char) * (sym_counter2(n) + 1))))
		return (NULL);
	i = sym_counter2(n);
	result[i--] = '\0';
	if (!n)
		result[0] = '0';
	while (n)
	{
		if (n > 0)
			result[i--] = (n % 10) + '0';
		else
			result[i--] = (-(n % 10)) + '0';
		n /= 10;
	}
	return (result);
}