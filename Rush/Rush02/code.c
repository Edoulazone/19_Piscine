/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   code.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschmitz <eschmitz@students.s19.be>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 10:56:01 by eschmitz          #+#    #+#             */
/*   Updated: 2024/02/24 19:19:34 by eschmitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#define DICO "num.dict"

void	write_tens(long nb);
void	write_0(long nb);
void	write_10(long nb);
void	write_100(long nb);
char	**make_dict(char *buff, char *sep);

char	*get(char *str, char *buff, char *sep, char **tab)
{
	int		i;
	int		j;
	int		t;
	char	*ret;

	j = -1;
	while (tab[++j][i] == str[i] && tab[j][i] && str[i])
	{
		if(tab[j][i + 1] == ':' && str[i + 1] == '\0')
		{
			i += 2;
			t = 0;
			while (tab[j][i])
			{
				ret[t] = tab[j][i];
				i++;
				t++;
			}
			ret[t] = '\0';
		}
		i = 0;
	}
	return (ret);
}

void	ft_write_word2(long nb, char *buff, char *sep, char **tab)
{
	int	n;

	if (nb >= 1000)
	{
		n = nb / 1000;
		write_100(n);
		if (n > 1)
			write(1, get("1000", buff, sep, tab), 10);
		else
			write(1, get("1000", buff, sep, tab), 9);
		nb = nb % 1000;
	}
	if (nb > 0)
		write_100(nb);
	else if (nb == 0)
		write(1, "zero", 4);
}

void	ft_write_word(long nb, char *buff, char *sep, char **tab)
{
	int	n;

	if (nb >= 1000000000)
	{
		n = nb / 1000000000;
		write_100(n);
		if (n > 1)
			write(1, "billions ", 9);
		else
			write(1, "billion ", 8);
		nb = nb % 1000000000;
	}
	if (nb >= 1000000)
	{
		n = nb / 1000000;
		write_100(n);
		if (n > 1)
			write(1, "millions ", 9);
		else
			write(1, "million ", 8);
		nb = nb % 1000000;
	}
	ft_write_word2(nb, buff, sep, tab);
}
