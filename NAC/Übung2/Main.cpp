#include "Matrix.h"
#include "Vektor.h"
#include "Vektor2D.h"
#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
/*	cout << "Erstellung Matrix mit Standardkonstruktor und Ausgabe" << endl;
	Matrix().ausgabe();
	cout << "Erstellung Vektor mit Standardkonstruktor und Ausgabe des Betrags" << endl;
	Vektor().betrag();*/
	cout << "Erstellung Vektor2D mit Standardkonstruktor und übergebenen Parametern (a,b,c,u) auf stack" << endl;
	Vektor2D a(3,1); //, b(2,1), c, u(1,2);
/*	cout << "Addiere a zu c" << endl;
	c.addiere(a);
	cout << "Addiere c zu b" << endl;
	b.addiere(c);
	cout << "Betrag von b" << endl;
	b.betrag(); */

	cout << "Erstelle Vektoren z und w auf heap" << endl;
	Vektor2D *z = new  Vektor2D(-3,1);
	//Vektor2D *w = new Vektor2D();

/*	cout << "Addiere z zu a" << endl;
	a.addiere(*z);
	cout << "Addiere z zu w" << endl;
	w->addiere(*z);
	cout << "Addiere b zu w" << endl;
	w->addiere(b);
	cout << "Kopiere u in w" << endl;
	u.kopiereIn(*w);
	cout << "Kopiere u in a" << endl;
	u.kopiereIn(a); */
	cout << "Tausche z und a" << endl;
	tausche(a, *z);
	cout << "Loesche z vom heap" << endl;
	delete(z);
	//cout << "Loesche w vom heap" << endl;
	//delete(w);
	cout << "Ende von Main mittels return 0" << endl;
	return 0;
}