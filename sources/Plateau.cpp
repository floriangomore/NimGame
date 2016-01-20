#include	"nimgame.h"

Plateau::Plateau(int nbTotalStick)
{
  p_nbTotalStick = nbTotalStick;

  std::cout << "Plateau prêt à jouer" << std::endl;
}

Plateau::~Plateau()
{
  std::cout << "Plateau supprimé avec succès" << std::endl;
}

void		Plateau::initialisation(void)
{
  int	i = 1;
  int	nb = 1;
  
  while (i++ <= 4)
    {
      new Ligne(i, nb);
      nb += 2;
    }
  std::cout << "Plateau initialisé" << std::endl;
}

int		Plateau::getNbTotalStick(void)
{
  return (p_nbTotalStick);
}

void		Plateau::setNbTotalStick(int nbTotalStick)
{
  p_nbTotalStick = nbTotalStick;
}

