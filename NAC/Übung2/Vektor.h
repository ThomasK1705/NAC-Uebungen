#ifndef VEKTOR_H
#define VEKTOR_H
#include "matrix.h"
class Vektor :
	public Matrix
{
public:
	Vektor(void);
	float betrag();
	int getDimension();
	float skalarprodukt(Vektor v);
	float winkel(Vektor v);
	virtual ~Vektor(void);
};

#endif /* VEKTOR_H */