# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abaille <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/01/25 00:22:44 by abaille           #+#    #+#              #
#    Updated: 2018/01/25 00:22:46 by abaille          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME = gnl
CC = gcc
CFLAGS = -Wall -Wextra -Werror #-g #-fsanitize=address
LIBFT = ./libft
SRCS = get_next_line.c
OBJS = ${SRCS:.c=.o}

all: $(NAME)
%.o: %.c 
	$(CC) $(CFLAGS) -c $< -o $@
$(NAME): $(OBJS)
	make -C $(LIBFT)
	$(CC) $(CFLAGS) -o $@ $(OBJS) libft/libft.a
clean:
	make -C $(LIBFT) clean
	rm -f $(OBJS)
fclean: clean
	make -C $(LIBFT) fclean
	rm -f $(NAME)
re: fclean all

.PHONY: clean fclean