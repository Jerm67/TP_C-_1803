#pragma once
#include <iostream>


class Ccadre {

	//Encapsulation
private:

	//Donn�es membres
	int m_x;
	int m_y; //X et Y seront mes points d'ancrage

public:

	//Constructeur avec param�tres
	Ccadre(int m_x, int m_y);

	//Accesseurs (acc�de aux donn�es membres)

	//Mutateurs  (modifie les donn�es membres)

	//M�thode
	void ancrage1(int val_x, int val_y);
	void modif(int h_x);
	void affich_ancr();
	

};