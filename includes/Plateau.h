#ifndef PLATEAU_H_
# define PLATEAU_H_

#include "nimgame.h"

class		Plateau
{
 private:
  int		p_nbTotalStick;

 public:
  Plateau(int nbTotalStick);
  ~Plateau();

  int		getNbTotalStick();
  void		setNbTotalStick(int nbTotalStick);
  void		initialisation();
};

#endif // PLATEAU_H_
