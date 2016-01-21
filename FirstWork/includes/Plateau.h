#ifndef PLATEAU_H_
# define PLATEAU_H_

#include "nimgame.h"
#include "Ligne.h"

class		Plateau
{
 private:
  int		p_nbTotalStick;
  int		p_nbLigne;
  Ligne		*p_ligne1;
  Ligne		*p_ligne2;
  Ligne		*p_ligne3;
  Ligne		*p_ligne4;

  Plateau() {};

 public:
  Plateau(int &nbLigne);
  ~Plateau();

  int		getNbTotalStick();
  void		setNbTotalStick(int nbLigne);
  int		getNbStickLigne1();
  int		getNbStickLigne2();
  int		getNbStickLigne3();
  int		getNbStickLigne4();
  Plateau&	init();
  void		display();
};

#endif // PLATEAU_H_
