/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschmitz <eschmitz@students.s19.be>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 17:31:49 by eschmitz          #+#    #+#             */
/*   Updated: 2024/02/15 18:40:37 by eschmitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

char	**ft_tab_sort(int number, char **tab)
{
	int		j;
	char	*wait;
	
	j = 1;
	while (j < number - 1)
	{
		if (ft_strcmp(tab[j], tab[j + 1]) > 0)
		{
			wait = tab[j];
			tab[j] = tab[j + 1];
			tab[j + 1] = wait;
			j = 1;
		}
		else
			j++;
	}
	return (tab);
}

int	main(int ac, char **av)
{
	int	i;
	int	j;
	char	**tab;

	tab = ft_tab_sort(ac, av);
	j = 1;
	while (j < ac)
	{
		i = 0;
		while (tab[j][i])
		{
			write(1, &tab[j][i], 1);
			i++;
		}
		write(1, "\n", 1);
		j++;
	}
	return (0);
}
