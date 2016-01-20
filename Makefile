##################
#                #
#    Makefile    #
#                #
##################

NAME	=	NimGame

CC	=	g++

RM	=	rm -rf

CFLAGS	=	-Wall -Werror -Wextra
CINCS	=	-I includes/

SRC	=	./sources/main.cpp			\
		./sources/display/displayLine.cpp

OBJ	=	$(SRC:.cpp=.o)

