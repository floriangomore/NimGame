#include	<iostream>
#include	<string>
#include"Plateau.h"

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

Plateau&       Plateau::set