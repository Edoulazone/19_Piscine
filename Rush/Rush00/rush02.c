/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschmitz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 18:24:43 by eschmitz          #+#    #+#             */
/*   Updated: 2024/02/11 16:06:14 by eschmitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_line(char a, char b, char c, int x)
{
	int	j;

	j = 1;
	if (x != 0)
	{
		ft_putchar(a);
		j++;
	}
	while (j < x)
	{
		ft_putchar(b);
		j++;
	}
	if (j == x)
		ft_putchar(c);
	if (x != 0)
		ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	i;

	i = 1;
	if (y != 0)
	{
		print_line('A', 'B', 'A', x);
		i++;
	}
	while (i < y)
	{
		print_line('B', ' ', 'B', x);
		i++;
	}
	if (i == y)
	{
		print_line('C', 'B', 'C', x);
		i++;
	}
}