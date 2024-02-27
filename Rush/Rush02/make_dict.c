/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_dict.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschmitz <eschmitz@students.s19.be>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 16:03:38 by eschmitz          #+#    #+#             */
/*   Updated: 2024/02/25 14:38:41 by eschmitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#define dict "./num.dict"
#define Size 10000


int	issep(char c, char *charset);
int	nbr_words(char *str, char *charset);
int	word_len(char *str, int c, char *charset);
char	**make_tab(char *str, char *charset, char **tab);
char	**ft_split(char *str, char *charset);
void	ft_write_word(long nb, char *buff, char *sep, char **tab);

char	**make_dict(char *buff, char *sep)
{
	char	**tab;

	tab = ft_split(buff, sep);
	return (tab);
}

int	main(void)
{
	long	nb;
	char	*sep;
	char	*buff;
	int		fd;

	sep = "\n";
	fd = open(dict, O_RDONLY);
	read(fd,buff,Size - 1);
	nb = 40643487;
	ft_write_word(nb, buff, sep, make_dict(buff, sep));
	free(ft_split(buff, sep));
	return (0);
}
