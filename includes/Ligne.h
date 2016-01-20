/* Ligne.h */

#ifndef LIGNE_H_
#define LIGNE_H_

#include	<string>
#include	<iostream>

class Ligne
{
 private:
  int		l_id;
  int		l_nbstick;

 public:
  Ligne(const int id, int nbstick);
  ~Ligne();

  void		Clear(void);
  void		addstick(int stkajout);
};

#endif // LIGNE_H_
