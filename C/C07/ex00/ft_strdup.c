/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschmitz <eschmitz@students.s19.be>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 21:27:36 by eschmitz          #+#    #+#             */
/*   Updated: 2024/02/15 21:35:38 by eschmitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		len;
	char	*dest;

	while (src[i])
		i++;
	len = 1 + i;
	dest = (char *)malloc(sizeof(char) * len);
	i = 0;
	while (src[i++])
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
