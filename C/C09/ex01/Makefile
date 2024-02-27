# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eschmitz <eschmitz@students.s19.be>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/26 19:15:42 by eschmitz          #+#    #+#              #
#    Updated: 2024/02/26 19:36:24 by eschmitz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

ALL_OTHERS = *.o
CC = cc
CFLAGS = -Wall -Werror -Wextra
OBJS = ft_putchar.o ft_strlen.o ft_putstr.o ft_strcmp.o ft_swap.o
PROG = libft.a

all = $(PROG)

$(PROG) : $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(PROG)

%.o : %.c
	$(CC) $(CFLAGS) -c $<

clean :
	rm -rf $(ALL_OTHERS)

fclean : clean
	rm -rf $(PROG)

re : fclean all

.PHONY : all clean fclean re
