#ifndef JOUEUR_H_
#define JOUEUR_H_

#include "nimgame.h"

class Joueur
{
private:
	std::string m_nom;
	std::string type;
	int m_score;	
	Joueur(void);

 public:
	Joueur(const std::string &nom,const std::string &type, int score);
	~Joueur();

	//Méthode à inclure pour IA
	
	std::string		getNom(void);
	std::string		getType(void);
	int				getScore(void);
	
	void			setType(const std::string &type, int n);
	void 			setNom(const std::string &nom, int n);
	void			setScore(void);    //A voir comment récupérer les points marqués par joueur et enregistrer dans l'ob. plateau
};

#endif // JOUEUR_H_
