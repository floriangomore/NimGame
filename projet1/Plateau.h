/* Plateau.h */

#ifndef PLATEAU_H_
#define PLATEAU_H_

#include	<string>
#include	<iostream>

class Plateau
{
 private:
  int		p_totalstick;

 public:
  Plateau(int totalstick);
  ~Plateau();

  int		gettotal(void)/*const*/ {return (p_totalstick)};

  /*const*/void	settotal(int totalstick);
  void		initialisation();
  //void	timer()
}

#endif	 // PLATEAU_H_
    
