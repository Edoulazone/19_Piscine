/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschmitz <eschmitz@students.s19.be>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 21:36:00 by eschmitz          #+#    #+#             */
/*   Updated: 2024/02/16 12:54:20 by eschmitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	len;
	int	j;

	if (min >= max)
		return (0);
	len = max - min;
	tab = (int *)malloc(sizeof(int) * len);
	j = 0;
	while (min <= max)
	{
		tab[j] = min;
		min++;
		j++;
	}
	return (tab);
}

#include <stdio.h>

int	main(void)
{
	int	minimum;
	int	maximum;
	int	i;

	minimum = 1;
	maximum = 12;
	i = 0;
	while (ft_range(minimum, maximum)[i] <= maximum)
	{
		printf("%d", ft_range(minimum, maximum)[i]);
		i++;
	}
	return (0);
}
