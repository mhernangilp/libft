# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mhernang <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/13 14:33:23 by mhernang          #+#    #+#              #
#    Updated: 2023/02/07 11:49:11 by mhernang         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIB = ar rcs

CC = gcc

NAME = libft.a

NOC = \033[0m
YELLOW = \033[1;33m
GREEN = \033[1;32m
RED = \033[1;31m

SRC = src/ft_isalpha.c \
	   src/ft_memcmp.c \
	   src/ft_strnstr.c \
	   src/ft_atoi.c \
	   src/ft_isascii.c \
	   src/ft_memcpy.c \
	   src/ft_memmove.c \
	   src/ft_strlcat.c \
	   src/ft_strrchr.c \
	   src/ft_bzero.c \
	   src/ft_isdigit.c \
	   src/ft_memset.c \
	   src/ft_strlcpy.c \
	   src/ft_calloc.c \
	   src/ft_isprint.c \
	   src/ft_strchr.c \
	   src/ft_strlen.c \
	   src/ft_tolower.c \
	   src/ft_isalnum.c \
	   src/ft_memchr.c \
	   src/ft_strdup.c \
	   src/ft_strncmp.c \
	   src/ft_toupper.c \
	   src/ft_calloc.c \
	   src/ft_substr.c \
	   src/ft_strjoin.c \
	   src/ft_strtrim.c \
	   src/ft_itoa.c \
	   src/ft_split.c \
	   src/ft_strmapi.c \
	   src/ft_striteri.c \
	   src/ft_putchar_fd.c \
	   src/ft_putstr_fd.c \
	   src/ft_putendl_fd.c \
	   src/ft_putnbr_fd.c

OBJ = ${SRC:.c=.o}

B_SRC = src/ft_lstnew.c \
		src/ft_lstadd_front.c \
		src/ft_lstsize.c \
		src/ft_lstlast.c \
		src/ft_lstadd_back.c \
		src/ft_lstdelone.c \
		src/ft_lstclear.c \
		src/ft_lstiter.c \
		src/ft_lstmap.c

B_OBJ = ${B_SRC:.c=.o}

FLAGS = -Wall -Werror -Wextra

INCLUDE = libft.h

all: ${NAME}

start:
	@echo "$(YELLOW)Compiling libft ...$(NOC)"

${NAME}: start ${OBJ} ${INCLUDE}
	@${LIB} ${NAME} ${OBJ}
	@echo "$(GREEN)Libft compiled ✓$(NOC)"

%.o: %.c
	@${CC} ${CCFLAGS} -c -o $@ $<

bonus: start ${B_OBJ} ${INCLUDE}
	@${LIB} ${NAME} ${B_OBJ}
	@echo "$(GREEN)Libft compiled with bonus ✓$(NOC)"

clean:
	@rm -f ${OBJ} ${B_OBJ}
	@echo "$(RED)Lift objects deleted ✓$(NOC)"

fclean: clean
	@rm -f ${NAME}
	@echo "$(RED)Lift deleted ✓$(NOC)"

re: fclean all

.PHONY: all clean fclear
