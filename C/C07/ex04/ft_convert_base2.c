/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschmitz <eschmitz@students.s19.be>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 16:06:57 by eschmitz          #+#    #+#             */
/*   Updated: 2024/02/28 14:48:57 by eschmitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	convert(int num, char *base, char *res, int i);
int	find_num_in_base(char c, char *base);
int	num_to_base_len(int num, char *base);
int	ft_atoi_base(char *str, char *base);

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*res;
	int		num;
	int		i;

	if (!nbr || !base_from || !base_to)
		return (0);
	num = ft_atoi_base(nbr, base_from);
	res = malloc(sizeof(char) * num_to_base_len(num, base_to));
	if (res == NULL)
		return (NULL);
	i = convert(num, base_to, res, num_to_base_len(num, base_to) - 1);
	res[i + 1] = '\0';
	return (res);
}
/*
#include <stdio.h>

int	main(int ac, char **av)
{
	printf("%s", ft_convert_base(av[1], av[2], av[3]));
	eturn (0);
}
*/
