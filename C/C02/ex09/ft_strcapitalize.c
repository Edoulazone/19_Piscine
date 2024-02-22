/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschmitz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 19:25:35 by eschmitz          #+#    #+#             */
/*   Updated: 2024/02/12 19:54:21 by eschmitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strmin(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

int	verif(char c)
{
	if (c <= 64 && c >= 58)
	{
		return (0);
	}
	else if (47 >= c)
	{
		return (0);
	}
	else if (c >= 123)
	{
		return (0);
	}
	else if (c >= 91 && c <= 96)
	{
		return (0);
	}
	else
		return (1);
}

char	*ft_strcapitalize(char	*str)
{
	int	i;

	i = 0;
	ft_strmin(str);
	while (str[i] != '\0')
	{
		if (i == 0)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - 32;
			i++;
		}
		else if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (verif(str[i - 1]) == 0)
				str[i] = str[i] - 32;
			i++;
		}
		else
			i++;
	}
	return (str);
}
/*
#include <stdio.h>
int	main(void)
{
	char	lol[17] = "wesh++lEs' poTes";
	printf("%s\n", lol);
	ft_strcapitalize(lol);
	printf("%s\n", lol);
	return (0);
}
*/
