#include	"nimgame.h"
#include	"Joueur.h"

Joueur::Joueur(const std::string &nom)
{
  j_nom = nom;

  std::cout << "Joueur créé" << std::endl;
}

Joueur::Joueur(const Joueur &copy)
{
  *this = copy;
  std::cout << "Nouveau joueur créé" << std::endl;
}

Joueur::~Joueur()
{
  std::cout << "Joueur supprimé" << std::endl;
}

std::string	Joueur::getNom(void)
{
  return (j_nom);
}

void		Joueur::setNom(const std::string& nom)
{
  j_nom = nom;
}
