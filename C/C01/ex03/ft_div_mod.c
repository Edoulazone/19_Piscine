/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschmitz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 11:34:25 by eschmitz          #+#    #+#             */
/*   Updated: 2024/02/08 13:36:32 by eschmitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
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
	int	s;
	int	t;
	int	*ptrs;
	int	*ptrt;
	int	resdiv;
	int	resmod;

	ptrs = &resdiv;
	ptrt = &resmod;
	s = 100;
	t = 3;
	write(1, "Le numerateur est ", 18);
	ft_putnbr(s);
	write(1, " et le denominateur est ", 24);
	ft_putnbr(t);
	ft_div_mod(s, t, ptrs, ptrt);
	ft_putch('\n');
	write(1, "Le resultat de la division est ", 31);
	ft_putnbr(resdiv);
	ft_putch('\n');
	write(1, "Le resultat du modulo est ", 30);
	ft_putnbr(resmod);
}
*/
