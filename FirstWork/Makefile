##################
#                #
#    Makefile    #
#                #
##################

CXX	=	g++ # compilateur
CFLAGS	=	-Wall -Werror -Wextra -I./includes/ #options de compilation (debug par exemple)
LDFLAGS	=	#options de link (librairies)

OBJ     =       $(SRC:.cpp=.o)

SRC     =       $(wildcard ./sources/*.cpp)

OBJ	=	$(SRC:.cpp=.o)

OUTPUT	=	NimGame # nom du programme

all:		$(OBJ)
		$(CXX) $(LDFLAGS) -o $(OUTPUT) $^

$(OBJ):		%.o: %.cpp
		$(CXX) $(CFLAGS) -c $< -o $@

re:		fclean all

.PHONY:		clean fclean

clean:
		rm -rf ./sources/*.o

fclean:		clean
		rm -rf $(OUTPUT)
