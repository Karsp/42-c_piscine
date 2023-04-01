# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: daviles- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/22 17:55:22 by daviles-          #+#    #+#              #
#    Updated: 2023/04/01 21:58:50 by daviles-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC	= gcc # It is a recommended practice to define the C compiler with CC
CFLAGS = -Wall -Wextra -Werror # Defines -Wall as default flag
SRC = ft_isprint.c \
	  ft_memmove.c \
	  ft_strrchr.c \
	  ft_bzero.c \
	  ft_memset.c \
	  ft_tolower.c\
	  ft_isalnum.c \
	  ft_strchr.c \
	  ft_toupper.c \
	  ft_isalpha.c \
	  ft_strlcpy.c \
	  ft_isascii.c \
	  ft_memchr.c \
	  ft_strlen.c \
	  ft_isdigit.c \
	  ft_memcpy.c \
	  ft_strncmp.c \
	  ft_strlcat.c \
	  ft_strnstr.c \
	  ft_memcmp.c \
	  ft_atoi.c \
	  ft_calloc.c \
	  ft_strdup.c \
	  ft_substr.c \
	  ft_strjoin.c \
	  ft_strtrim.c \
	  ft_split.c \
	  ft_itoa.c \
	  ft_strmapi.c \
	  ft_striteri.c \
	  ft_putchar_fd.c \
	  ft_putstr_fd.c \
	  ft_putendl_fd.c \
	  ft_putnbr_fd.c
NAME = libft.a
LIB = ar rcs
RM = rm -f
OBJ = $(SRC:.c=.o)
INCLUDE = libft.h

all : $(NAME)

$(NAME) : $(OBJ) $(INCLUDE)
	$(LIB) $(NAME) $(OBJ)
	ranlib $(NAME)

%.o : %.c
	$(CC) $(CFLAGS) -c -o $@ $<

clean :
	$(RM) $(OBJ) 

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY : all NAME clean fclean re
