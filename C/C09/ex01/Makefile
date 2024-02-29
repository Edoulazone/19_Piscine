# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eschmitz <eschmitz@students.s19.be>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/26 19:15:42 by eschmitz          #+#    #+#              #
#    Updated: 2024/02/29 18:11:11 by eschmitz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cci
CFLAGS = -Wall -Werror -Wextra
SRCS = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c
OBJS = $(SRCS:.c=.o) 
PROG = libft.a

INCLUDE = includes/

all = $(PROG)

$(PROG) : $(OBJS)
	ar rc $(PROG) $(OBJS)
	ranlib $(PROG)

%.o : %.c
	$(CC) $(CFLAGS) -c $< -I $(INCLUDE)

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(PROG)

re : fclean all

.PHONY : all clean fclean re
