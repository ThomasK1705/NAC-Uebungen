#include "Vektor2D.h"
#include <iostream>
using namespace std;


Vektor2D::Vektor2D(void)
	: Vektor()
{
	cout << "Standardkonstruktor von Vektor2D wurde aufgerufen." << endl;
}


Vektor2D::Vektor2D(float xeingabe, float yeingabe)
	: xcord(xeingabe), ycord(yeingabe)
{
	m_Element[0]=xcord;
	m_Element[1]=ycord;
	cout << "Nicht der Standardkonsturktor von Vektor2D wurde aufgerufen." << endl;
}

void Vektor2D::ausgabe(void)
{
	cout << "Vektor2D:";
	Matrix::ausgabe();
}

void Vektor2D:: addiere(Vektor2D v){

	for(int i=0; i<(m_Zeilen*m_Spalten); i++)
		{
			m_Element[i] = v.m_Element[i] + m_Element[i];
		}
	cout << "Summe des Vektors addiert mit Eingabevektor:" << endl;
	ausgabe();
}

void Vektor2D::kopiereIn(Vektor2D zielvar){
	for(int i=0; i<(m_Zeilen*m_Spalten); i++)
		{
			zielvar.m_Element[i] = m_Element[i]; 
		}
	ausgabe();
}

void tausche(Vektor2D a,Vektor2D b){
	Vektor2D temp = a;
	cout << "Ausgabe zweiter Vektor" << endl;
	b.kopiereIn(a);
	b = temp;
	cout << "Ausgabe erster Vektor" << endl;
	a.ausgabe();
}


Vektor2D::~Vektor2D(void)
{
}