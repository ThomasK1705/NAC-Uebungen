#ifndef MATRIX_H
#define MATRIX_H
class Matrix
{
protected:
	int m_Zeilen;
	int m_Spalten;
	float m_Element[2];

public:
	Matrix(void);
	void ausgabe();

	virtual ~Matrix(void);
};

#endif /* MATRIX_H */