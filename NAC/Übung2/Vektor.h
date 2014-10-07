#pragma once // Durch headerguard ersetzen
#include "matrix.h"
class Vektor :
	public Matrix
{
public:
	Vektor(void);
	void betrag();
	virtual ~Vektor(void);
};

