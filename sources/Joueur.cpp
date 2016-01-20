#include	"nimgame.h"

using namespace std;


void	Joueur::setType(const string& type,int n)
{

	n = 0;
 	

	cout<<"Humain ou Ordinateur?(0/1):"<<endl;
	cin >> n;
	if(n = 0)
	{
	
	}
	if(n = 1)
	{
		
	}
	else
	{
		cout<<"Erreur de saisie."<<endl;
	}
	m_type = type;

}

/*void	Joueur::setNom(const string& nom, int n)
{
	 n = 0;
	string nom;

	cout<<"Selectionnez votre joueur(0/1):"<<endl;
	cin >> n;
	if(n = 0)
	{
		cin >> "player 1";
	}
	if(n = 1)
	{
		cin >> "player 2";
	}
	else
	{
		cout<<"Erreur de saisie."<<endl;
	}

	m_nom = nom;
}
void		Joueur::setScore(void)
{
	Joueur.getNom(Plateau.getScore());
}*/
