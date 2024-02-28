/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschmitz <eschmitz@students.s19.be>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 12:56:49 by eschmitz          #+#    #+#             */
/*   Updated: 2024/02/28 18:05:59 by eschmitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	issep(char c, char *charset)
{
	int	i;

	i = -1;
	while (charset[++i])
		if (charset[i] == c)
			return (0);
	return (1);
}

int	nbr_words(char *str, char *charset)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (str[i])
	{
		while (issep(str[i], charset) == 0 && str[i])
			i++;
		if (str[i] != '\0')
			count++;
		while (issep(str[i], charset) == 1 && str[i])
			i++;
	}
	return (count);
}

int	word_len(char *str, int c, char *charset)
{
	int	i;

	i = 0;
	while (issep(str[c + i], charset) == 1 && str[c + i])
		i++;
	return (i + 1);
}

char	**make_tab(char *str, char *charset, char **tab)
{
	int	i;
	int	j;
	int	c;

	c = 0;
	j = -1;
	while (str[c] && (++j < nbr_words(str, charset)))
	{
		i = 0;
		tab[j] = (char *)malloc(sizeof(char) * word_len(str, c, charset));
		if (tab[j] == NULL)
			return (NULL);
		while (issep(str[c], charset) == 0)
			c++;
		while (issep(str[c], charset) == 1 && str[c])
			tab[j][i++] = str[c++];
		while (issep(str[c], charset) == 0)
			c++;
		tab[j][i] = '\0';
	}
	return (tab);
}

char	**ft_split(char *str, char *charset)
{
	char	**tab;
	int		j;
	int		i;

	i = 0;
	j = 0;
	tab = (char **)malloc(sizeof(char *) * (nbr_words(str, charset) + 1));
	if (tab == NULL)
		return (NULL);
	tab = make_tab(str, charset, tab);
	tab[nbr_words(str, charset)] = 0;
	return (tab);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*string;
	char	*sep;
	int		j;
	char	**tab;

	j = 0;
	string = "ht/ a-  gh  ";
	sep = " /-";
	tab = ft_split(string, sep);
	while (tab[j])
	{
		printf("%s", tab[j]);
		j++;
	}
	free(ft_split(string, sep));
	return (0);
}
*/
