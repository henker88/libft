# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sgendry <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/24 18:09:46 by sgendry           #+#    #+#              #
#    Updated: 2018/11/26 20:07:36 by sgendry          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft
LIB = $(NAME).a
CC = gcc
CFLAGS = -Wall -Wextra -Werror -c
FILES = ft_memset.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_memccpy.c \
		ft_memmove.c \
		ft_bzero.c \
		ft_memcpy.c \
		ft_strlen.c \
		ft_strdup.c \
		ft_strcpy.c \
		ft_strncpy.c \
		ft_strcat.c \
		ft_strncat.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_strcmp.c \
		ft_strncmp.c \
		ft_atoi.c \
		ft_isalpha.c \
		ft_isdigit.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_toupper.c \
		ft_tolower.c

OBJECTS = $(FILES:.c=.o)


all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(FILES) -I libft.h
	ar rc $(LIB) $(OBJECTS)
	ranlib $(LIB)

clean:
	rm -rf $(OBJECTS)

fclean: clean
	rm -rf $(LIB)

re: fclean all
