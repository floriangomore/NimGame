#include	"nimgame.h"

Ligne::Ligne(int id, int nbstick)
{
  l_id = id;
  l_nbstick = nbstick;

  std::cout << "les lignes du jeu ont été initialisées !" << std::endl;
}

Ligne::~Ligne()
{
  std::cout << "les lignes du jeu ont été supprimées !" << std::endl;
}

voidLigne::clear(void)
{
  return(0);
}

voidLigne::addstick(int stkajout)
{

}
