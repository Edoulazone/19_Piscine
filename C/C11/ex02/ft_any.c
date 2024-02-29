/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschmitz <eschmitz@students.s19.be>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 15:56:59 by eschmitz          #+#    #+#             */
/*   Updated: 2024/02/29 17:17:03 by eschmitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_any(char **tab, int(*f)(char*))
{
	int	j;

	j = -1;
	while (tab[++j])
	{
		if ((*f)(tab[j]) != 0)
			return (1);
	}
	return (0);
}
