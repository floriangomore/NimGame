/*Ligne.cpp*/

#include	<iostream>
#include	<string>
#include	"Ligne.h"

Ligne::Ligne(int id, int nbstick)
{
  l_id = id;
  l_nbstick = nbstick;

  std::cout << "les lignes du jeu ont été initialisées !" << std::endl;
}

Ligne::~Ligne()
{
  std::cout << "les lignes du jeu ont été supprimées !" << std::endl;
}

void		Ligne::clear(void)
{
  return(0);
}

void		Ligne::addstick(int stkajout)
{
  
}
