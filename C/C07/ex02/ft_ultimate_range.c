/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschmitz <eschmitz@students.s19.be>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 21:45:48 by eschmitz          #+#    #+#             */
/*   Updated: 2024/02/20 15:11:03 by eschmitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*tab;
	int	i;
	int	len;
	int	j;

	if (min > max)
		return (0);
	i = min;
	while (i < max)
		i++;
	len = i + 1;
	tab = (int *)malloc(sizeof(int) * len);
	i = min;
	j = 0;
	while (i++ < max)
	{
		tab[j] = i;
			j++;
	}
	*range = tab;
	return (j);
}
