/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschmitz <eschmitz@students.s19.be>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 11:36:55 by eschmitz          #+#    #+#             */
/*   Updated: 2024/02/27 17:04:46 by eschmitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		c;
	char	*st;

	st = malloc(sizeof(char) * size);
	if (st == NULL)
		return (NULL);
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
		while (sep[i] && i < size -1)
			st[c++] = sep[i++];
		j++;
	}
	st[c] = '\0';
	return (st);
}
