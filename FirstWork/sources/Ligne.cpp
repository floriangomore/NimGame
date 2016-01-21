#include	"nimgame.h"
#include	"Ligne.h"

Ligne::Ligne(int id, int nbStick)
{
  l_id = id;
  l_nbStick = nbStick;

  //std::cout << "Ligne créée" << std::endl;
}

Ligne::Ligne(const Ligne &copy)
{
  *this = copy;
  
  // std::cout << "Ligne créée" << std::endl;
}

Ligne::~Ligne()
{
  //  std::cout << "Ligne supprimée" << std::endl;
}

int		Ligne::getNbStick(void)
{
  return (l_nbStick);
}

void		Ligne::setNbStick(int nbStick)
{
  l_nbStick = nbStick;
}

int		Ligne::getId(void)
{
  return (l_id);
}

void		Ligne::setId(int id)
{
  l_id = id;
}
