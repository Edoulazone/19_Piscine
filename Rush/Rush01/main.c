/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschmitz <eschmitz@students.s19.be>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 14:34:39 by eschmitz          #+#    #+#             */
/*   Updated: 2024/02/17 18:21:07 by eschmitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	verif(int tab[4][4], int position, int *arguments,int  hauteur);
void	ft_putchar(char c);
void	ft_putstr(char *str);
int *ft_supp_espaces(char *str);
int codeok(int ac, int *av);

int	solve(int tab[4][4], int position, int *arguments)
{
	int	hauteur;
	
	if (position == 16)
		return(1);
	hauteur = 1;
	while (hauteur++ <= 4)
	{
		if (verif(tab, position, arguments, hauteur) == 1)
		{
			tab[position / 4][position % 4] = hauteur;
			if (solve(tab, position + 1, arguments) == 1)
				return (1);
		}
		else
			tab[position / 4][position % 4] = 0;
	}
	return (0);
}

void	print_solved(int tab[4][4])
{
	int	i;
	int	j;

	j = 0;
	while (j++ < 4)
	{
		i = 0;
		while (i++ < 3)
		{
			ft_putchar(tab[j][i]);
			ft_putchar(' ');
		}
		ft_putchar(tab[j][i]);
		ft_putchar('\n');
	}
}

int	main(int ac, char **av)
{
	int	tab[4][4] = {{0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}};
	int	*arguments;
	int	position;

	position = 0;
	arguments = ft_supp_espaces(av[1]);
	if (codeok(ac, arguments) == 0)
	{
		ft_putstr("Error");
		return (0);
	}
	if (solve(tab, position, arguments) == 1)
		print_solved(tab);
	else
		ft_putstr("Error");
	return (0);
}
