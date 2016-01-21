#ifndef JOUEUR_H_
# define JOUEUR_H_

#include "nimgame.h"

class		Joueur
{
 private:
  std::string	j_nom;
  Joueur(void);

 public:
  Joueur(const std::string &nom);
  Joueur(const Joueur &copy);
  ~Joueur();

  std::string	getNom();
  void		setNom(const std::string& nom);
};

#endif // JOUEUR_H_
