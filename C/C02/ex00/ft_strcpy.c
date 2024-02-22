/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschmitz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 18:00:19 by eschmitz          #+#    #+#             */
/*   Updated: 2024/02/12 20:08:26 by eschmitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return (dest);
}

/*
#include <stdio.h>
int	main(void)
{
	char	*source;

	char	destination[13] = "";
	source = "Hello world!";
	for (int	i = 0; i<= 11; i++)
		printf("%c", source[i]);
	ft_strcpy(destination, source);
	for (int	i = 0; i <= 11; i++)
		printf("%c", destination[i]);
}
*/
