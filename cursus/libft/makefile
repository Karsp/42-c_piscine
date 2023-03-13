CC = gcc # It is a recommended practice to define the C compiler with CC
CFLAGS = -Wall -Wextra -Werror # Defines -Wall as default flag
OBJECTS = isprint.o	memmove.o strrchr.o bzero.o memset.o tolower.o\
		  isalnum.o strchr.o toupper.o isalpha.o strlcpy.o isascii.o\
		  memchr.o strlen.o isdigit.o memcpy.o strncmp.o

libft.a : $(OBJECTS)
	ar rcs $@ $^
	ranlib $@
	
.PHONY : clean
clean :
	rm  libft.a $(OBJECTS) 
