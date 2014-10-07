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
	double a = 0;
	double b = 1;
	for(int i=0; i<(m_Zeilen*m_Spalten); i++)
	{
		a = m_Element[i]*m_Element[i];
		b = b*a;
	}
	b = sqrt(b);
	cout << "Betrag des Vektors: " << b << endl;
}

Vektor::~Vektor(void)
{
}
