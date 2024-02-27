# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eschmitz <eschmitz@students.s19.be>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/26 19:08:39 by eschmitz          #+#    #+#              #
#    Updated: 2024/02/26 19:13:35 by eschmitz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

cc ft_putchar.c ft_swap.c ft_strlen.c ft_putstr.c ft_strcmp.c -Wall -Werror -Wextra -o
ar -rc libft.a ft_putchar.o ft_swap.o ft_strlen.o ft_putstr.o ft_strcmp.o 
rm -f *.o
