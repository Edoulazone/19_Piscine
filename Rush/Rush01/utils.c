/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbutt <hbutt@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 12:31:32 by hbutt             #+#    #+#             */
/*   Updated: 2024/02/17 18:29:34 by eschmitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int *ft_supp_espaces(char *str)
{
	int i;
	int j;
	int taille_str;
	int *new_str;

	new_str = (int *)malloc(sizeof(int) * 16);
	i = 0;
	j = 0;
	taille_str = ft_strlen(str);
	while(i < taille_str)
	{
		if(str[i] != ' ')
		{
			new_str[j] = str[i] + 48;
			i++;
			j++;
		}
		i++;
	}
	new_str[j+1] = '\0';
	return(new_str);
}
/*
#include <stdio.h>
int main(void)
{
	char *str = "1 01111 0 2 3 4 2 1 3";
	char *new = ft_supp_espaces(str);
	printf("%s", new);
	return (0);
}*/
