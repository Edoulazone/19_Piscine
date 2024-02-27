/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschmitz <eschmitz@students.s19.be>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 21:36:00 by eschmitz          #+#    #+#             */
/*   Updated: 2024/02/27 16:45:46 by eschmitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	len;
	int	j;

	if (min >= max)
		return (NULL);
	len = max - min;
	tab = (int *)malloc(sizeof(int) * len);
	if (tab == NULL)
		return (NULL);
	j = 0;
	while (min <= max)
	{
		tab[j] = min;
		min++;
		j++;
	}
	return (tab);
}
/*
#include <stdio.h>

int	main(void)
{
	int	minimum;
	int	maximum;
	int	i;

	minimum = -8;
	maximum = -9;
	i = 0;
	while ( i <= maximum - minimum)
	{
		printf("%d", ft_range(minimum, maximum)[i]);
		i++;
	}
	free(ft_range(minimum, maximum));
	return (0);
}
*/
