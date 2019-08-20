/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhulk <rhulk@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/25 18:43:03 by emedea            #+#    #+#             */
/*   Updated: 2019/08/20 14:51:09 by rhulk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int		sym_counter(int n)
{
	int			result;

	result = 1;
	while (n /= 10)
		result++;
	return (result);
}

char			*ft_itoa(int n)
{
	char		*result;
	int			i;

	if (!(result = (char *)malloc(sizeof(char) * (sym_counter(n) + 1))))
		return (NULL);
	i = sym_counter(n);
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
