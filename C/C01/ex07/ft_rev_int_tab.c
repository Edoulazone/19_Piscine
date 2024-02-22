/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschmitz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 15:09:03 by eschmitz          #+#    #+#             */
/*   Updated: 2024/02/08 16:15:23 by eschmitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	att;
	int	i;
	int	x;

	i = 0;
	x = 1;
	while (x <= (size / 2))
	{
		att = tab[i];
		tab[i] = tab[size - x];
		tab[size - x] = att;
		i++;
		x++;
	}
}
/*
#include <stdio.h>

int	main(void)
{
	int	tableau[10] = {0,1,2,3,4,5,6,7,8,9};
	ft_rev_int_tab(tableau, 10);
	for (int	i = 0; i < 10; i++)
		printf("%d", tableau[i]);
}
*/
