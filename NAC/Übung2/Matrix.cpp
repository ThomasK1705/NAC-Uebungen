#include "Matrix.h"
#include <iostream>
using namespace std;


Matrix::Matrix(void)
	: m_Zeilen(2), m_Spalten(1)
{
	for(int i=0; i<(m_Zeilen*m_Spalten); i++)
	{
		m_Element[i]=2;
	}

	cout << "Standardkonstruktor von Matrix wurde aufgerufen." << endl;
}
void Matrix::ausgabe(void)
{
	cout << "Matrix: (";
	for(int i=0; i<(m_Zeilen*m_Spalten); i++)
	{
		cout << "|" << m_Element[i] << "|";
	}
	cout << ")" << endl;
}




Matrix::~Matrix(void)
{
	ausgabe();
	cout << "wird zerstoert" << endl;
}