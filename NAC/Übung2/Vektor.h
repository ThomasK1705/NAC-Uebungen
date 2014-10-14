#ifndef VEKTOR_H
#define VEKTOR_H
#include "matrix.h"
class Vektor :
	public Matrix
{
public:
	Vektor(void);
	void betrag();
	virtual ~Vektor(void);
};

#endif /* VEKTOR_H */