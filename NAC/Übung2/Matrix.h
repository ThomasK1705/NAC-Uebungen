#ifndef MATRIX_H
#define MATRIX_H
class Matrix
{
private:
	static int counter;

protected:
	int m_Zeilen;
	int m_Spalten;
	float m_Element[2];

public:
	Matrix(void);
	Matrix(const Matrix& copy);
	static void getCounter();
	virtual void ausgabe();

	virtual ~Matrix(void);
};

#endif /* MATRIX_H */