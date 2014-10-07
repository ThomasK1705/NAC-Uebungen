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
	void setX(int x);
	void setY(int y);
	void addiere(Vektor2D v);
	virtual ~Vektor2D(void);
};

