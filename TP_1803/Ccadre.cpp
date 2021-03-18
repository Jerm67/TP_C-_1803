#include "Ccadre.h"


using namespace std;

Ccadre::Ccadre(int m_x, int m_y)
{
	this->m_x = m_x;
	this->m_y = m_y;
}

void Ccadre::ancrage1(int val_x, int val_y)
{
	this->m_x += val_x;
	this->m_y += val_y;
}

void Ccadre::affich_ancr()
{
	cout << m_x << endl;
	cout << m_y << endl;
}

void Ccadre::modif(int h_x)
{
	m_x = m_x * h_x;
	m_y = m_y * h_x;
}




