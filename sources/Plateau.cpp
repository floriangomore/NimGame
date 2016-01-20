#include	"nimgame.h"
#include	"Plateau.h"
#include	"Ligne.h"

Plateau::Plateau(int &nbLigne)
{
  p_nbLigne = nbLigne;
  Plateau::init();
  Plateau::display();
  
  std::cout << "Plateau prêt à jouer" << std::endl;
}

Plateau::~Plateau()
{
  delete p_ligne1;
  delete p_ligne2;
  delete p_ligne3;
  delete p_ligne4;
  
  std::cout << "Plateau supprimé avec succès" << std::endl;
}

Plateau&	Plateau::init(void)
{
  Ligne		*ligne1;
  Ligne		*ligne2;
  Ligne		*ligne3;
  Ligne		*ligne4;

  ligne1 = new Ligne(0, 1);
  ligne2 = new Ligne(1, 3);
  ligne3 = new Ligne(2, 5);
  ligne4 = new Ligne(3, 7);

  p_ligne1 = ligne1;
  p_ligne2 = ligne2;
  p_ligne3 = ligne3;
  p_ligne4 = ligne4;

  std::cout << "Plateau initialisé" << std::endl;

  return (*this);
}

int		Plateau::getNbTotalStick(void)
{
  return (p_nbTotalStick);
}

int		Plateau::getNbStickLigne1(void)
{
  return (p_ligne1->getNbStick());
}

int		Plateau::getNbStickLigne2(void)
{
  return (p_ligne2->getNbStick());
}

int		Plateau::getNbStickLigne3(void)
{
  return (p_ligne3->getNbStick());
}

int		Plateau::getNbStickLigne4(void)
{
  return (p_ligne4->getNbStick());
}

void		Plateau::setNbTotalStick(int nbTotalStick)
{
  p_nbTotalStick = nbTotalStick;
}

void		Plateau::display()
{
  int		nb1 = this->getNbStickLigne1();
  int		nb2 = this->getNbStickLigne2();
  int		nb3 = this->getNbStickLigne3();
  int		nb4 = this->getNbStickLigne4();
  
  std::cout << "Ligne 1 : ";
  while (nb1-- > 0)
    std::cout << "|";
  std::cout << std::endl;

  std::cout << "Ligne 2 : ";
  while (nb2-- > 0)
    std::cout << "|";
  std::cout << std::endl;

  std::cout << "Ligne 3 : ";
  while (nb3-- > 0)
    std::cout << "|";
  std::cout << std::endl;

  std::cout << "Ligne 4 : ";
  while (nb4-- > 0)
    std::cout << "|";
  std::cout << std::endl;
  
}
