/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschmitz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 16:23:41 by eschmitz          #+#    #+#             */
/*   Updated: 2024/02/08 17:59:32 by eschmitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	att;

	j = 0;
	while (j < size)
	{
		i = 0;
		while (i < size)
		{
			if (tab[i] > tab[i + 1])
			{
				att = tab[i + 1];
				tab[i + 1] = tab[i];
				tab[i] = att;
			}
			i++;
		}
		j++;
	}
}
/*
#include <stdio.h>
int	main(void)
{
	int	tableau[10] = {0,8,6,3,7,5,4,7,8,9};
	ft_sort_int_tab(tableau, 10);
	for (int	i = 0; i < 10; i++)
		printf("%d", tableau[i]);
}
*/
