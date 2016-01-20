#include	"nimgame.h"
#include	"Plateau.h"

int		launchGame(void)
{ 
  Plateau	*ptr;
  int		nbLigne = 4;
  
  ptr = new Plateau(nbLigne);

  delete ptr;

  return (0);
}
