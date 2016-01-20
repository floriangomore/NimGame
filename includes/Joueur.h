#ifndef JOUEUR_H_
#define JOUEUR_H_

#include "nimgame.h"

class joueur;
{
public:
	joueur(const std::string& nom, int score, bool etat);
	~joueur();

//Méthode à inclure pour IA

	std::string		get(void);
	int				get(score);


	void 			setNom(const std::string& nom);
	void			setScore(int score);
private:

	std::string m_nom;
	int m_score;
	bool etat; 		// !! A voir (D)

};
#endif // JEDI_H_
