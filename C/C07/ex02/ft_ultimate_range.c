/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschmitz <eschmitz@students.s19.be>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 21:45:48 by eschmitz          #+#    #+#             */
/*   Updated: 2024/02/28 19:30:49 by eschmitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*tab;
	int	len;
	int	j;

	if (min >= max)
	{
		range[0] = (void *)0;
		return (0);
	}
	len = max - min;
	tab = (int *)malloc(sizeof(int) * len);
	if (tab == NULL)
		return (-1);
	j = 0;
	while (min < max)
	{
		tab[j] = min;
		j++;
		min++;
	}
	*range = tab;
	return (j);
}
