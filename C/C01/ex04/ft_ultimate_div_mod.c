/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschmitz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 12:42:36 by eschmitz          #+#    #+#             */
/*   Updated: 2024/02/08 13:37:10 by eschmitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	inte;

	inte = *a;
	*a = *a / *b;
	*b = inte % *b;
}
/*

#include <unistd.h>

void	ft_putch(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putch('-');
		nb = -nb;
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putch(nb + 48);
}
int	main(void)
{
	int	a;
	int	b;
	int	*ptra;
	int	*ptrb;

	ptra = &a;
	ptrb = &b;
	a = 100;
	b = 3;
	ft_putnbr(a);
	ft_putnbr(b);
	ft_ultimate_div_mod(ptra, ptrb);
	ft_putnbr(a);
	ft_putnbr(b);
	return (0);
}
*/
