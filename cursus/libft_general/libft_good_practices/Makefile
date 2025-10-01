# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pemarque <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/22 17:09:29 by pemarque          #+#    #+#              #
#    Updated: 2025/09/23 16:34:42 by pemarque         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #



CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a

# ===== FILE LISTS =====
SRC_FOLDER = srcs
INC = -Iincludes

#SRCS = ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c
SRCS = ft_atoi.c ft_isprint.c ft_putchar_fd.c ft_striteri.c ft_strnstr.c ft_bzero.c ft_itoa.c ft_putendl_fd.c ft_strjoin.c ft_strrchr.c ft_calloc.c ft_memchr.c ft_putnbr_fd.c ft_strlcat.c ft_strtrim.c ft_isalnum.c ft_memcmp.c ft_putstr_fd.c ft_strlcpy.c ft_substr.c ft_isalpha.c ft_memcpy.c ft_split.c ft_strlen.c ft_tolower.c ft_isascii.c ft_memmove.c ft_strchr.c ft_strmapi.c ft_toupper.c ft_isdigit.c ft_memset.c ft_strdup.c ft_strncmp.c
OBJS = $(SRCS:%.c=$(SRC_FOLDER)/%.o)



all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

$(SRC_FOLDER)/%.o: $(SRC_FOLDER)/%.c
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
