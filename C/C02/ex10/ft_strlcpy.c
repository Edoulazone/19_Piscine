/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschmitz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 16:27:03 by eschmitz          #+#    #+#             */
/*   Updated: 2024/02/13 13:19:50 by eschmitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (1)
	{
		if (str[i] == '\0')
			return (i);
		i++;
	}
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	j;
	unsigned int	lcpy;
	int				i;

	lcpy = ft_strlen(src);
	j = 0;
	i = 0;
	if (size != 0)
	{
		while (j < size - 1 && i < ft_strlen(src))
		{
			dest[j] = src[j];
			j++;
			i++;
		}
		while (j < size)
		{
			dest[j] = '\0';
			j++;
		}
	}
	return (lcpy);
}
/*
#include <stdio.h>
int	main(void)
{
	char	*source;

	char	destination[16] = "";
	source = "Hello world!";
	printf("%s", source);
	ft_strlcpy(destination, source, 5);
	printf("%s", destination);
	return (0);
}
*/
