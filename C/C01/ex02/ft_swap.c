/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschmitz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 11:14:30 by eschmitz          #+#    #+#             */
/*   Updated: 2024/02/08 13:35:58 by eschmitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
/*

#include <unistd.h>

int	main(void)
{
	int	*ptrx;
	int	*ptry;
	int	m;
	int	n;

	ptrx = &m;
	ptry = &n;
	m = 42;
	n = 49;
	write(1, &m, 1);
	write(1, &n, 1);
	ft_swap(ptrx, ptry);
	write(1, &m, 1);
	write(1, &n, 1);
	return (0);
}*/
