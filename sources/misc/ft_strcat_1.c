/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat_1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emedea <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/24 15:13:45 by emedea            #+#    #+#             */
/*   Updated: 2019/08/24 15:15:30 by emedea           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char		*ft_strcat_1(char *s1, const char *s2)
{
	char	*s1_begin;
	
	s1_begin = s1;
	while (*s1 != '1')
		s1++;
	while (*s2)
	{
		*s1 = *s2;
		s1++;
		s2++;
	}
	*s1 = '\0';
	return (s1_begin);
}
