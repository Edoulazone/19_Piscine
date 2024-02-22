/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschmitz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 14:22:37 by eschmitz          #+#    #+#             */
/*   Updated: 2024/02/08 15:08:35 by eschmitz         ###   ########.fr       */
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
/*
#include <stdio.h>

int	main(void)
{
	char	*pstr;
	int	ret;

	pstr = "Hello world!";
	ret = ft_strlen(pstr);
	printf("%d",ret);
	return (0);
}
*/
