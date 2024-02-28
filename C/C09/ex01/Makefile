# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eschmitz <eschmitz@students.s19.be>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/26 19:15:42 by eschmitz          #+#    #+#              #
#    Updated: 2024/02/28 19:57:38 by eschmitz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

ALL_OTHERS = *.o
CC = cc
CFLAGS = -Wall -Werror -Wextra
OBJS = ft_putchar.o ft_strlen.o ft_putstr.o ft_strcmp.o ft_swap.o
PROG = libft.a

INCLUDE = includes/

all = $(PROG)

$(PROG) : $(OBJS)
	ar rc $(CFLAGS) $(OBJS) -o $(PROG)

%.o : %.c
	$(CC) $(CFLAGS) -c $< -I $(INCLUDE)

clean :
	rm -rf $(ALL_OTHERS)

fclean : clean
	rm -rf $(PROG)

re : fclean all

.PHONY : all clean fclean re
