/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   code2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschmitz <eschmitz@students.s19.be>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 15:12:21 by eschmitz          #+#    #+#             */
/*   Updated: 2024/02/24 19:16:08 by eschmitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_tens(long nb)
{
	if (nb == 19)
		write(1, "nineteen ", 9);
	if (nb == 18)
		write(1, "eighteen ", 9);
	if (nb == 17)
		write(1, "seventeen ", 10);
	if (nb == 16)
		write(1, "sixteen ", 8);
	if (nb == 15)
		write(1, "fifteen ", 8);
	if (nb == 14)
		write(1, "forteen ", 8);
	if (nb == 13)
		write(1, "thirteen ", 8);
	if (nb == 12)
		write(1, "twelve ", 7);
	if (nb == 11)
		write(1, "eleven ", 7);
	if (nb == 10)
		write(1, "ten ", 4);
}

void	write_0(long nb)
{
	if (nb == 9)
		write(1, "nine ", 5);
	if (nb == 8)
		write(1, "eight ", 6);
	if (nb == 7)
		write(1, "seven ", 6);
	if (nb == 6)
		write(1, "six ", 4);
	if (nb == 5)
		write(1, "five ", 5);
	if (nb == 4)
		write(1, "four ", 5);
	if (nb == 3)
		write(1, "three ", 6);
	if (nb == 2)
		write(1, "two ", 4);
	if (nb == 1)
		write(1, "one ", 4);
}

void	write_10(long nb)
{
	if (nb / 10 == 9)
		write(1, "ninety ", 7);
	if (nb / 10 == 8)
		write(1, "eighty ", 7);
	if (nb / 10 == 7)
		write(1, "seventy ", 8);
	if (nb / 10 == 6)
		write(1, "sixty ", 7);
	if (nb / 10 == 5)
		write(1, "fifty ", 6);
	if (nb / 10 == 4)
		write(1, "forty ", 6);
	if (nb / 10 == 3)
		write(1, "thirty ", 7);
	if (nb / 10 == 2)
		write(1, "twenty ", 7);
	if (nb / 10 == 1)
		write_tens(nb);
	if (nb >= 20 || nb < 10)
		write_0(nb % 10);
}

void	write_100(long nb)
{
	if (nb >= 100)
	{
		write_0(nb / 100);
		write(1, "hundred ", 8);
	}
	write_10(nb % 100);
}
