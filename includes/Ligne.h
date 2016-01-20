#ifndef LIGNE_H_
# define LIGNE_H_

#include "nimgame.h"

class		Ligne
{
 private:
  int		l_id;
  int		l_nbStick;

 public:
  Ligne(int id, int nbStick);
  Ligne(const Ligne &copy);
  ~Ligne();

  int		getNbStick();
  void		setNbStick(int nbStick);
};

#endif // LIGNE_H_
