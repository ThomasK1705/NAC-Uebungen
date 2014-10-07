#include "Vektor2D.h"
#include <iostream>
using namespace std;


Vektor2D::Vektor2D(void)
	: Vektor()
{
	cout << "Standardkonstruktor von Vektor2D wurde aufgerufen." << endl;
}


Vektor2D::Vektor2D(int xeingabe, int yeingabe)
	: xcord(xeingabe), ycord(yeingabe)
{
	cout << "Nicht der Standardkonsturktor von Vektor wurde aufgerunfen." << endl;
}

void Vektor2D :: setX(int x){
	xcord = x;
}

void Vektor2D :: setY(int y){
	ycord = y;
}

void Vektor2D:: addiere(Vektor2D v){

	for(int i=0; i<(m_Zeilen*m_Spalten); i++)
		{
			m_Element[i] = v.m_Element[i]+m_Element[i];
		}
	cout << "Summer des Vektors addiert mit Eingabevektor:" << endl;
	ausgabe();
}


Vektor2D::~Vektor2D(void)
{
}
