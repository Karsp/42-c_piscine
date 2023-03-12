CC = gcc # It is a recommended practice to define the C compiler with CC
CFLAGS = -Wall -Wextra -Werror # Defines -Wall as default flag
OBJECTS = isalpha.o isalnum.o isascii.o isdigit.o isprint.o memset.o\
		  strlen.o toupper.o

libft.a : $(OBJECTS)
	ar rcs $@ $^
	ranlib $@
	
.PHONY : clean
clean :
	rm  libft.a $(OBJECTS) 
