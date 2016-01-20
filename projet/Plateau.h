/* Plateau.h */

#ifndef PLATEAU_H_
#define PLATEAU_H_

#include	<string>
#include	<iostream>

class Plateau
{
 private:
  int		p_totalstick;
  int		p_joueur;
   
    
 public:
  Plateau(int totalstick, int joueur);
  ~Plateau();
  
  int		getjoueur(void) {return (p_joueur)};
  int		gettotal(void) {return (p_totalstick)};

  void		setjoueur(int joueur);
  void		settotal(int totalstick);

  void		initialisation();
  void		timer();
  void		score(int scor);
}

#endif	 // PLATEAU_H_
    
