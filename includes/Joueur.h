#ifndef JOUEUR_H_
#define JOUEUR_H_
<<<<<<< HEAD
#include <string>
=======

#include "nimgame.h"
>>>>>>> 645b0230467e6a6b9cb8b27eda7e5e8e9d907b0b

class Joueur
{
public:
	Joueur(const std::string& nom,const std::string& type, int score);
	~Joueur();

//Méthode à inclure pour IA

	std::string		getNom(void);
	std::string		getType(void);
	int				getScore(void);


	void			setType(const std::string& type, int n);
	void 			setNom(const std::string& nom , int n);
	void			setScore(void);    //A voir comment récupérer les points marqués par joueur et enregistrer dans l'ob. plateau
 
private:

	std::string m_nom;
	std::string type;
	int m_score;	
	Joueur(void);



};
<<<<<<< HEAD
#endif // JOUEUR_H_
=======
#endif // JEDI_H_
>>>>>>> 645b0230467e6a6b9cb8b27eda7e5e8e9d907b0b
