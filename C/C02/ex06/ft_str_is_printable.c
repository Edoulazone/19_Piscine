/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschmitz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 19:12:34 by eschmitz          #+#    #+#             */
/*   Updated: 2024/02/12 19:05:03 by eschmitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 127 || str[i] < 32)
			return (0);
		i++;
	}
	return (1);
}

/*
int	main(void)
{
	char	*str;
	str = "Michel c'est le Bresil\n";
	ft_str_is_printable(str);
	return (0);
}
*/
