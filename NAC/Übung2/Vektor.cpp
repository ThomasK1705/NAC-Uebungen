#include "Vektor.h"
#include <iostream>
#include <math.h>
#include <limits.h>
using namespace std;

#ifndef PI
#define PI 3.141593
#endif /* PI */


Vektor::Vektor(void)
	: Matrix()
{
	cout << "Standardkonstruktor von Vektor wurde aufgerufen." << endl;
}

float Vektor::betrag(void){
	double betrag = 0;
	/*for(int i=0; i<(m_Zeilen*m_Spalten); i++)
	{
		betrag = betrag + m_Element[i]*m_Element[i];
	}*/
	betrag = skalarprodukt(*this);
	betrag = sqrt(betrag);
	//cout << "Betrag des Vektors: " << betrag << endl;
	return betrag;
}

int Vektor::getDimension(){
	return m_Zeilen;
}

float Vektor::skalarprodukt(Vektor v){
	if (getDimension()==v.getDimension()){
		float s = 0;
		for(int i=0; i<(m_Zeilen*m_Spalten); i++)
		{
			s = s + m_Element[i]*v.m_Element[i];
		}
		//cout << "Skalarprodukt der Vektoren: " << s << endl;
		return s;
	}
	else {
		cout << "Dimensionen der Vektoren ungleich" << endl;
		return numeric_limits<float>::quiet_NaN();
	}
}

float Vektor::winkel(Vektor v){
	if (getDimension()==v.getDimension()){
		float w = 0;
		// Winkel = Skalarprodukt/(betrag(a)*betrag(b))
		w = skalarprodukt(v) / (v.betrag() * this->betrag());
		w = (360/(2*PI)) * acos(w);
		cout << "Winkel zwischen den Vektoren: " << w << " Grad" << endl;
		return w;
	}
	else {
		cout << "Dimensionen der Vektoren ungleich" << endl;
		return numeric_limits<float>::quiet_NaN();
	}
}

Vektor::~Vektor(void)
{
}