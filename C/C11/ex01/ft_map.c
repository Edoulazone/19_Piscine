/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschmitz <eschmitz@students.s19.be>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 15:51:51 by eschmitz          #+#    #+#             */
/*   Updated: 2024/02/29 15:56:41 by eschmitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	*ft_map(int *tab, int length, int(*f)(int))
{
	int	i;
	int	*res;

	res = (int *)malloc(sizeof(int) * length);
	if (res == NULL)
		return (NULL);
	i = -1;
	while (tab[++i])
		res[i] = (*f)(tab[i]);
	return (res);
}
