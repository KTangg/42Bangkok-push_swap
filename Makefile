# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: spoolpra <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/14 18:33:16 by spoolpra          #+#    #+#              #
#    Updated: 2022/02/27 15:33:33 by spoolpra         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Werror -Wextra
RM = rm -rf

SRC_DIR = srcs/
OBJ_DIR = objs/
LIB_DIR = libft/

INCS = -Iincludes/ -I$(LIB_DIR)includes/
NAME = push_swap
SRCS = push_swap.c valid_swap_input.c
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(addprefix $(OBJ_DIR),$(OBJS))
	@make -C $(LIB_DIR) --silent
	$(CC) $^ -o $(NAME) -L $(LIB_DIR) -lft
$(OBJ_DIR)%.o: $(SRC_DIR)%.c
	@mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< $(INCS) -o $@
clean:
	@make -C $(LIB_DIR) clean --silent
	$(RM) $(OBJS)
fclean: clean
	@make -C $(LIB_DIR) fclean --silent
	$(RM) $(NAME)
re: fclean all
