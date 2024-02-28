/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschmitz <eschmitz@students.s19.be>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 12:45:15 by eschmitz          #+#    #+#             */
/*   Updated: 2024/02/28 12:45:39 by eschmitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		c;
	char	*st;

	st = malloc(sizeof(strs));
	if (st == NULL)
		return (NULL);
	st[0] = '\0';
	if (size == 0)
		return (st);
	j = 0;
	c = 0;
	while (j < size)
	{
		i = 0;
		while (strs[j][i])
			st[c++] = strs[j][i++];
		i = 0;
		while (sep[i] && j < size -1)
			st[c++] = sep[i++];
		j++;
	}
	st[c] = '\0';
	return (st);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*michel[3];
	char	*sep;

	michel[0] = "Salut";
	michel[1] = "Les petits";
	michel[2] = "loups";
	sep = " ";
	printf("%s", ft_strjoin(3, michel, sep));
	return (0);
}
*/
