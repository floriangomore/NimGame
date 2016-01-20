##################
#                #
#    Makefile    #
#                #
##################

NAME	=	NimGame

CC	=	g++

RM	=	rm -rf

CFLAGS	=	-Wall -Werror -Wextra -I./includes/

SRC	=	./sources/main.cpp			\
		./sources/Joueur.cpp			\
		./sources/Ligne.cpp			\
		./sources/Plateau.cpp

all:		$(NAME)

$(NAME):
		$(CC) $(SRC) -o $(NAME) $(CFLAGS)
		@echo "Compilation terminée"

fclean	:	tild
		$(RM) $(NAME)
		@echo "Suppression de l'exécutable terminée"

re	:	fclean all

tild	:
		find . -name "*~" -print -delete
		@echo "Fichiers supprimés"


.PHONY:		all fclean
