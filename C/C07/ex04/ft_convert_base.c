/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschmitz <eschmitz@students.s19.be>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 16:04:28 by eschmitz          #+#    #+#             */
/*   Updated: 2024/02/22 12:56:18 by eschmitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <stdlib.h>

int	convert(int num, char *base)
{
	int	long_base;
	int	nb;

	long_base = 0;
	nb = 0;
	while (base[long_base])
		long_base++;
	while (num >= long_base)
	{
		nb = nb * long_base + 


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
		resultat = resultat * long_base + find_num_in_base(str[i], base);
	if (pos % 2 == 1)
		return (-result);
	return (result);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*res;
	int		num;
	int		i;

	if (!nbr || !base_from || !base_to)
		return (0);
	num = ft_atoi_base(nbr, base_from);
	res = malloc(sizeof(char) * num_to_base_len(num, base_to));
	num = convert(num, base_to)
	
