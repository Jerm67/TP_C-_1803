#pragma once
#include <iostream>


class Ccadre {

	//Encapsulation
private:

	//Données membres
	int m_x;
	int m_y; //X et Y seront mes points d'ancrage

public:

	//Constructeur avec paramètres
	Ccadre(int m_x, int m_y);

	//Accesseurs (accède aux données membres)

	//Mutateurs  (modifie les données membres)

	//Méthode
	void ancrage1(int val_x, int val_y);
	void modif(int h_x);
	void affich_ancr();
	

};