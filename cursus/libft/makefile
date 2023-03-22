# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: daviles- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/22 17:55:22 by daviles-          #+#    #+#              #
#    Updated: 2023/03/22 20:33:08 by daviles-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC	= gcc # It is a recommended practice to define the C compiler with CC
CFLAGS = -Wall -Wextra -Werror # Defines -Wall as default flag
SRC = isprint.c	memmove.c strrchr.c bzero.c memset.c tolower.c\
			isalnum.c strchr.c toupper.c isalpha.c strlcpy.c isascii.c\
			memchr.c strlen.c isdigit.c memcpy.c strncmp.c
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
