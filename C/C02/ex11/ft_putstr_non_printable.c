/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschmitz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 14:43:27 by eschmitz          #+#    #+#             */
/*   Updated: 2024/02/14 12:10:29 by eschmitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_to_hexa(unsigned char x)
{
	if (x <= 9)
	{
		x = x + 48;
		write(1, &x, 1);
	}
	else
	{
		x = x + 87;
		write(1, &x, 1);
	}
}

void	ft_putstr_non_printable(char *str)
{
	int				i;
	unsigned char	a;
	unsigned char	b;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
			write(1, &str[i], 1);
		if (str[i] <= 31 || str[i] >= 127)
		{
			a = str[i] / 16;
			b = str[i] % 16;
			write(1, "\\", 1);
			ft_to_hexa(a);
			ft_to_hexa(b);
		}
		i++;
	}
}
/*
int	main(void)
{
	char	*michel;
	michel = "weivhckd \t   \ncdhsbch";
	ft_putstr_non_printable(michel);
	michel = "Coucou\ntu vas bien ?";
	ft_putstr_non_printable(michel);
	return (0);
}
*/
