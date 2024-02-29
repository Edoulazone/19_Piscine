/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschmitz <eschmitz@students.s19.be>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 17:18:11 by eschmitz          #+#    #+#             */
/*   Updated: 2024/02/29 17:27:28 by eschmitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int length, int(*f)(char*))
{
	int	j;
	int	count;

	i = -1;
	count = 0;
	while (tab[++j])
	{
		if (f(tab[j] != 0))
			count++;
	}
	return (count);
}
