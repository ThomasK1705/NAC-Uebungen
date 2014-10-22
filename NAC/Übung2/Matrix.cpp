#include "Matrix.h"
#include <iostream>
using namespace std;
int Matrix::counter=0;


Matrix::Matrix(void)
	: m_Zeilen(2), m_Spalten(1)
{
	for(int i=0; i<(m_Zeilen*m_Spalten); i++)
	{
		m_Element[i]=0;
	}
	counter++;
	cout << "Standardkonstruktor von Matrix wurde aufgerufen." << endl;
}

Matrix::Matrix(const Matrix& copy)
	: m_Zeilen(copy.m_Zeilen), m_Spalten(copy.m_Spalten)
{
	for(int i=0; i<(m_Zeilen*m_Spalten); i++)
	{
		m_Element[i]=copy.m_Element[i];
	}
	counter++;
	cout << "Copykonstruktor von Matrix wurde aufgerufen." << endl;
}


void Matrix::getCounter()
{
	cout << "Counter: " << counter << endl;
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
	counter--;
	cout << "wird zerstoert" << endl;
}