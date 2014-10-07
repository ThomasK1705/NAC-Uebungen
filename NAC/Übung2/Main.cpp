#include "Matrix.h"
#include "Vektor.h"
#include "Vektor2D.h"
using namespace std;

int main(int argc, char* argv[])
{
	Matrix().ausgabe();
	Vektor().betrag();
	Vektor2D a(3,1), b(2,1), c;
	c.addiere(a);
	b.addiere(c);
	b.betrag();
}