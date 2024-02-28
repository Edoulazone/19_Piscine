/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschmitz <eschmitz@students.s19.be>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 16:04:28 by eschmitz          #+#    #+#             */
/*   Updated: 2024/02/28 14:44:13 by eschmitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	convert(int num, char *base, char *res, int i)
{
	int	long_base;
	int	nb;

	long_base = 0;
	nb = 0;
	while (base[long_base])
		long_base++;
	if (nb < 0)
	{
		res[i] = '-';
		i++;
		nb = -num;
	}
	else
		nb = num;
	if (nb >= long_base)
		convert(nb / long_base, base, res, i - 1);
	res[i] = base[nb % long_base];
	return (i);
}

int	find_num_in_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i] && base[i] != c)
		i++;
	return (i);
}

int	num_to_base_len(int num, char *base)
{
	int	l;
	int	long_base;
	int	pos;

	long_base = 0;
	pos = 1;
	while (base[long_base])
		long_base++;
	l = 0;
	if (num < 0)
	{
		num = -num;
		l++;
	}
	while (num >= long_base)
	{
		l++;
		num = num / long_base;
	}
	return (l);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	pos;
	int	long_base;
	int	result;

	long_base = 0;
	while (base[long_base])
		long_base++;
	i = 0;
	while (str[i] && (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13)))
		i++;
	result = 0;
	pos = 0;
	while (str[i] && (str[i] == '-' || str[i] == '+'))
	{
		if (str[i] == '-')
			pos++;
		i++;
	}
	while (str[i] && (str[i] >= '0' && str[i] <= '9'))
		result = result * long_base + find_num_in_base(str[i++], base);
	if (pos % 2 == 1)
		return (-result);
	return (result);
}
