/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschmitz <eschmitz@students.s19.be>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 11:36:55 by eschmitz          #+#    #+#             */
/*   Updated: 2024/02/21 12:52:35 by eschmitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_size_sep(char *sep)
{
	int	i;

	i = 0;
	while (sep[i])
		i++;
	return (i);
}

int	ft_strlen(char **str, int size)
{
	int	i;
	int	j;
	int	count;

	count = 0;
	j = 0;
	while (j++ < size)
	{
		i = 0;
		while (str[j][i++])
			count++;
	}
	return (count);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		c;
	char	*st;

	st = malloc(sizeof(char) * ((size - 1) * ft_size_sep(sep) + ft_strlen(strs) + 1));
	if (size == 0)
		return (st);
	i = 0;
	j = 0;
	c = 0;
	while (j < size)
	{
		i = 0;
		while (strs[j][i++])
		{
			st[c] = strs[j][i];
			c++;
		}
		i = 0;
		while (sep[i++])
		{
			st[c] = sep[i];
			c++;
		}
		j++;
	}
	st[c] = '\0';
	return (st);
}
