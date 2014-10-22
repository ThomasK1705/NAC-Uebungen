#include "vektor.h"

class Vektor2D :
	public Vektor
{
protected:
	int xcord;
	int ycord;

public:
	Vektor2D(void);
	Vektor2D(int, int);
	void ausgabe();
	void addiere(Vektor2D v);
	void kopiereIn(Vektor2D zielvar);
	virtual ~Vektor2D(void);
};

#ifndef TAUSCHEN_FUN
#define TAUSCHEN_FUN

void tausche(Vektor2D ,Vektor2D);

#endif /* TAUSCHEN_FUN*/