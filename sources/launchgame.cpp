#include	"nimgame.h"

int		launchGame(void)
{ 
  Plateau	*ptr;
  int		nbStick = 16;
  
  ptr = new Plateau(nbStick);

  ptr->initialisation();

  delete ptr;

  return (0);
}
