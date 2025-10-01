# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pemarque <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/22 17:09:29 by pemarque          #+#    #+#              #
#    Updated: 2025/09/23 16:53:11 by pemarque         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #



CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = ft_display_file

# ===== FILE LISTS =====
INC = -Iincludes

#SRCS = ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c
SRCS = ft_display_file.c
OBJS = $(SRCS:%.c=%.o)



all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(INC) -o $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $(INC) $< -o $@
# ===== CLEANUP RULES =====
clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all




# ===== COMMANDS =====
# - Make		builds the program creating .o files (all)
# - Make clean		cleans the program removing .o files
# - Make fclean		cleans the program removing .o & bsq
# - Make re		builds + cleans
