/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   skip_numbers.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emedea <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/23 16:28:28 by emedea            #+#    #+#             */
/*   Updated: 2019/08/23 16:53:41 by emedea           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	skip_numbers(const char *format, int *i)
{
	while (format[*i] >= '0' && format[*i] <= '9')
		*i += 1;
	return (0);
}
