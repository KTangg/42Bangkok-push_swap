# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: spoolpra <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/14 18:33:16 by spoolpra          #+#    #+#              #
#    Updated: 2022/02/27 15:34:11 by spoolpra         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Werror -Wextra
IS_LIBC = srcs/ft_isalnum.c srcs/ft_isascii.c srcs/ft_isprint.c srcs/ft_isdigit.c srcs/ft_isalpha.c srcs/ft_isspace.c
TO_LIBC = srcs/ft_toupper.c srcs/ft_tolower.c srcs/ft_atoi.c
STR_LIBC = srcs/ft_strchr.c srcs/ft_strrchr.c srcs/ft_strlen.c srcs/ft_strncmp.c srcs/ft_strlcpy.c srcs/ft_strlcat.c srcs/ft_strnstr.c srcs/ft_strdup.c
MEM_LIBC = srcs/ft_memset.c srcs/ft_bzero.c srcs/ft_memcpy.c srcs/ft_memmove.c srcs/ft_memchr.c srcs/ft_memcmp.c srcs/ft_calloc.c
LIBC = $(IS_LIBC) $(TO_LIBC) $(STR_LIBC) $(MEM_LIBC)
STR_ADDC = srcs/ft_substr.c srcs/ft_strjoin.c srcs/ft_strtrim.c srcs/ft_split.c srcs/ft_itoa.c srcs/ft_strmapi.c srcs/ft_striteri.c
PUT_ADDC = srcs/ft_putchar_fd.c srcs/ft_putstr_fd.c srcs/ft_putendl_fd.c srcs/ft_putnbr_fd.c
LST_ADDC = srcs/ft_lstsize.c srcs/ft_lstnew.c srcs/ft_lstmap.c srcs/ft_lstlast.c srcs/ft_lstiter.c srcs/ft_lstdelone.c srcs/ft_lstclear.c srcs/ft_lstadd_front.c srcs/ft_lstaddback.c
PRINTF = srcs/ft_printf.c srcs/ft_printf_extend_format.c srcs/ft_printf_extend_format_util_1.c srcs/ft_printf_get_format.c srcs/ft_printf_get_format_util_1.c srcs/ft_printf_helper.c srcs/ft_printf_util_1.c srcs/ft_printf_util_2.c srcs/ft_printf_util_3.c srcs/ft_printf_util_4.c
GNL = srcs/ft_get_next_line.c srcs/ft_get_next_line_utils.c
ADDC = $(STR_ADDC) $(PUT_ADDC) $(PRINTF) $(GNL)
SRCS = $(LIBC) $(ADDC)
OBJS = $(SRCS:.c=.o)
INCS = includes
NAME = libft.a
RM = rm -rf

all: $(NAME)

$(NAME): $(OBJS)
	ar -rcs $@ $^
	ranlib $@
%.o: %.c
	$(CC) $(CFLAGS) -c $< -I $(INCS) -o $@
clean:
	$(RM) srcs/*.o
fclean: clean
	$(RM) $(NAME)
re: fclean all
