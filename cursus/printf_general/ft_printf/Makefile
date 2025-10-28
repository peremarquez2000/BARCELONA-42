# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pemarque <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/22 17:09:29 by pemarque          #+#    #+#              #
#    Updated: 2025/10/01 13:15:02 by pemarque         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #



CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = libftprintf.a

# ===== FILE LISTS =====

SRCS = ft_hexa.c ft_printf_utils.c ft_printf.c
OBJS = $(SRCS:%.c=%.o)

LIBFT = libft/libft.a

ALL_OBJS = $(OBJS)

INCLUDE = ft_printf.h 

all: libft $(NAME)

$(NAME): $(ALL_OBJS) $(LIBFT) $(INCLUDE) Makefile
	cp $(LIBFT) $(NAME)
	ar -rcs $(NAME) $(ALL_OBJS)

$(LIBFT):
	$(MAKE) -C libft



%.o: %.c $(INCLUDE) Makefile
	$(CC) $(CFLAGS) -c $< -o $@

# ===== CLEANUP RULES =====
clean:
	rm -f $(OBJS)
	@$(MAKE) -C libft clean

fclean: clean
	rm -f $(NAME)
	@$(MAKE) -C libft fclean

re: fclean all

.PHONY: all clean fclean re




# ===== COMMANDS =====
# - Make		builds the program creating .o files (all)
# - Make clean		cleans the program removing .o files
# - Make fclean		cleans the program removing .o & bsq
# - Make re		builds + cleans
