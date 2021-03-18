
/*Réponses aux questions de cours

1.1 Le constructeur permet d'initialiser des variables et il est exécuté en premier dans le programme principal

1.2 Le destructeur permet le suppression des variables du constructeur et il est executé en dernier dans le programme principale. Le destructeur est indispensable dans le cas ou un pointeur point sur un objet du même type.

1.3 Ce qui me permet de repèrer le constructeur d'une classe est quand le constructeur à le même nom que la classe (par exemple Ccadre::Ccadre). Il peu y avoir plusieur constructeur de classe, un avec paramètre, un sans et une copie qui peux faire appel à un pointeur.

1.4 La surdéfinition de fonction est deux fonction avec le même nom mais qui n'ont pas les mêmes paramètres.

1.5 La signification de private dans une classe veux dire que les variables ne seront pas accesible en dehors de la classe et public veux dire que les variables seront accessibles hors de la classe */

#include "Ccadre.h"

int main() {
	
	Ccadre p(5, 10);

	p.ancrage1(2, 4);
	p.modif(1);
	p.affich_ancr();

};