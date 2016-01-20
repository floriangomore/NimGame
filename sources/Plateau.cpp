<<<<<<< HEAD
#include	"nimgame.h"
=======
#include	<iostream>
#include	<string>
#include	"Plateau.h"
>>>>>>> 389dd3463d7e45e3b3f8c74d49bc7ad1fad3707d

Plateau::Plateau(int totalstick, int joueur)
{
  p_totalstick = totalstick;
  p_joueur = joueur;

  std::cout << "le plateau a été crée !" << std::endl;
}

Plateau::~Plateau()
{
  std::cout << "le plateau est vide, la partie est terminée !" << std::endl;
}

<<<<<<< HEAD
PlateauPlateau::settotal(int totalstick)
=======
Plateau		Plateau::settotal(int totalstick)
>>>>>>> 389dd3463d7e45e3b3f8c74d49bc7ad1fad3707d
{
  return(0);
}

<<<<<<< HEAD
voidPlateau::Initialisation()
=======
void		Plateau::Initialisation()
>>>>>>> 389dd3463d7e45e3b3f8c74d49bc7ad1fad3707d
{
  return(0);
}

<<<<<<< HEAD
voidPlateau::timer()
{
  return(0);
}
=======
void		Plateau::timer()
{
  return(0);
}

>>>>>>> 389dd3463d7e45e3b3f8c74d49bc7ad1fad3707d
