#include "Vektor.h"
#include <iostream>
#include <math.h>
using namespace std;


Vektor::Vektor(void)
	: Matrix()
{
	cout << "Standardkonstruktor von Vektor wurde aufgerufen." << endl;
}



void Vektor::betrag(void){
	double betrag = 0;
	for(int i=0; i<(m_Zeilen*m_Spalten); i++)
	{
		betrag = betrag + m_Element[i]*m_Element[i];
	}
	betrag = sqrt(betrag);
	cout << "Betrag des Vektors: " << betrag << endl;
}

Vektor::~Vektor(void)
{
}